package com.tencent.mtt.hippy.modules.nativemodules.audio;

import android.content.Context;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.net.Uri;
import com.tencent.mtt.hippy.HippyEngineContext;
import com.tencent.mtt.hippy.annotation.HippyMethod;
import com.tencent.mtt.hippy.annotation.HippyNativeModule;
import com.tencent.mtt.hippy.common.HippyMap;
import com.tencent.mtt.hippy.modules.Promise;
import com.tencent.mtt.hippy.modules.javascriptmodules.EventDispatcher;
import com.tencent.mtt.hippy.modules.nativemodules.HippyNativeModuleBase;

@HippyNativeModule(name = "AudioPlayerModule")
public class AudioPlayerModule extends HippyNativeModuleBase
{

	private static final String		BUFFERING	= "BUFFERING";
	private static final String		COMPLETED	= "COMPLETED";
	private static final String		PAUSED		= "PAUSED";
	private static final String		PLAYING		= "PLAYING";
	private static final String		STOPPED		= "STOPPED";

	private HippyEngineContext		mHippyEngineContext;
	private MediaPlayerStateWrapper	mMediaPlayer;

	private int						mDuration	= 0;
	private int						mProgress	= 0;
	private String					mState		= STOPPED;

	public AudioPlayerModule(HippyEngineContext hippyEngineContext)
	{
		super(hippyEngineContext);

		this.mHippyEngineContext = hippyEngineContext;
		this.mMediaPlayer = new MediaPlayerStateWrapper();
	}

	private void sendEvent(String eventName, HippyMap params)
	{
		this.mHippyEngineContext.getModuleManager().getJavaScriptModule(EventDispatcher.class).receiveNativeEvent(eventName, params);
	}

	private String getState()
	{
		if (this.mMediaPlayer.isPlaying())
		{
			return PLAYING;
		}
		else
		{
			return this.mState;
		}
	}

	private MediaPlayerStateWrapper createMediaPlayer(Context context, Uri uri, MediaPlayer.OnPreparedListener onPreparedListener)
	{
		this.mState = BUFFERING;

		try
		{
			MediaPlayerStateWrapper mediaPlayer = new MediaPlayerStateWrapper();
			mediaPlayer.setDataSource(context, uri);
			mediaPlayer.setAudioStreamType(AudioManager.STREAM_MUSIC);
			if (onPreparedListener != null)
			{
				mediaPlayer.setOnPreparedListener(onPreparedListener);
				mediaPlayer.prepareAsync();
			}
			else
			{
				mediaPlayer.prepare();
			}

			return mediaPlayer;
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}

		return null;
	}

	@HippyMethod(name = "play")
	public void play(String streamingURL, Promise callback)
	{
		try
		{
			Uri streamingURI = Uri.parse(streamingURL);
			this.stop();

			this.mMediaPlayer = this.createMediaPlayer(this.mHippyEngineContext.getGlobalConfigs().getContext(), streamingURI,
					new MediaPlayer.OnPreparedListener()
					{
						@Override
						public void onPrepared(MediaPlayer mediaPlayer)
						{
							AudioPlayerModule.this.resume();
						}
					});
			this.mMediaPlayer.setOnCompletionListener(new MediaPlayer.OnCompletionListener()
			{
				@Override
				public void onCompletion(MediaPlayer mediaPlayer)
				{
					AudioPlayerModule.this.mState = COMPLETED;
				}
			});

			callback.resolve("OK");
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
			callback.resolve("ERROR");
		}
	}

	@HippyMethod(name = "goBack")
	public void goBack(Float seconds)
	{
		try
		{
			int milliseconds = Math.round(seconds) * 1000;
			int newPosition = this.mMediaPlayer.getCurrentPosition() - milliseconds;

			if (newPosition < 0)
			{
				newPosition = 0;
			}

			this.seekTo(newPosition);
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
	}

	@HippyMethod(name = "goForward")
	public void goForward(Float seconds)
	{
		try
		{
			int milliseconds = Math.round(seconds) * 1000;
			int newPosition = this.mMediaPlayer.getCurrentPosition() + milliseconds;

			if (newPosition > this.mDuration)
			{
				newPosition = this.mDuration;
			}

			this.seekTo(newPosition);
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
	}

	@HippyMethod(name = "seekTo")
	public void seekTo(int newPosition)
	{
		try
		{
			if (this.mMediaPlayer != null)
			{
				this.mMediaPlayer.seekTo(newPosition);
			}
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
		finally
		{
			this.mState = BUFFERING;
		}
	}

	@HippyMethod(name = "pause")
	public void pause()
	{
		try
		{
			if (this.mMediaPlayer != null)
			{
				this.mMediaPlayer.pause();
			}
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
		finally
		{
			this.mState = PAUSED;
		}
	}

	@HippyMethod(name = "resume")
	public void resume()
	{
		try
		{
			if (this.mMediaPlayer != null)
			{
				this.mMediaPlayer.start();
			}
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
		finally
		{
			this.mState = BUFFERING;
		}
	}

	@HippyMethod(name = "stop")
	public void stop()
	{
		try
		{
			if (this.mMediaPlayer != null)
			{
				this.mMediaPlayer.stop();
				this.mMediaPlayer.release();
			}
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
		finally
		{
			this.mState = STOPPED;
		}
	}

	@HippyMethod(name = "destroyNotification")
	public void destroyNotification()
	{
	}

	@HippyMethod(name = "getStatus")
	public void getStatus(Promise callback)
	{
		HippyMap state = new HippyMap();
		state.pushString("status", this.getState());
		state.pushInt("duration", this.mMediaPlayer.getDuration() / 1000);
		state.pushInt("progress", this.mMediaPlayer.getCurrentPosition() / 1000);
		callback.resolve(state);
	}
}
