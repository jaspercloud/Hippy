/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <objc/runtime.h>

#import <JavaScriptCore/JavaScriptCore.h>

#import "HippyBridgeModule.h"
#import "HippyInvalidating.h"
#include "engine-impl.h"

typedef void (^HippyJavaScriptCompleteBlock)(NSError *error);
typedef void (^HippyJavaScriptCallback)(id result, NSError *error);

/**
 * Abstracts away a JavaScript execution context - we may be running code in a
 * web view (for debugging purposes), or may be running code in a `JSContext`.
 */
@protocol HippyJavaScriptExecutor <HippyInvalidating, HippyBridgeModule>

/**
 * Used to set up the executor after the bridge has been fully initialized.
 * Do any expensive setup in this method instead of `-init`.
 */
- (void)setUp;

/**
 * Whether the executor has been invalidated
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

/*
 *hippy-core js engine
 */
@property (nonatomic, assign) std::weak_ptr<Engine> pEngine;
@property (nonatomic, assign) std::weak_ptr<Environment> pEnv;
@property (nonatomic, assign) hippy::napi::napi_context napi_ctx;
@property (readonly) JSGlobalContextRef JSGlobalContextRef;
@property (nonatomic, copy) NSString *businessName;
/**
 * Executes BatchedBridge.flushedQueue on JS thread and calls the given callback
 * with JSValue, containing the next queue, and JSContext.
 */
- (void)flushedQueue:(HippyJavaScriptCallback)onComplete;

/**
 * Executes BatchedBridge.callFunctionReturnFlushedQueue with the module name,
 * method name and optional additional arguments on the JS thread and calls the
 * given callback with JSValue, containing the next queue, and JSContext.
 */
- (void)callFunctionOnModule:(NSString *)module
                      method:(NSString *)method
                   arguments:(NSArray *)args
                    callback:(HippyJavaScriptCallback)onComplete;

/**
 * Executes BatchedBridge.invokeCallbackAndReturnFlushedQueue with the cbID,
 * and optional additional arguments on the JS thread and calls the
 * given callback with JSValue, containing the next queue, and JSContext.
 */
- (void)invokeCallbackID:(NSNumber *)cbID
               arguments:(NSArray *)args
                callback:(HippyJavaScriptCallback)onComplete;

/**
 * Runs an application script, and notifies of the script load being complete via `onComplete`.
 */
- (void)executeApplicationScript:(NSData *)script
                       sourceURL:(NSURL *)sourceURL
                      onComplete:(HippyJavaScriptCompleteBlock)onComplete;

- (void)injectJSONText:(NSString *)script
   asGlobalObjectNamed:(NSString *)objectName
              callback:(HippyJavaScriptCompleteBlock)onComplete;

/**
 * Enqueue a block to run in the executors JS thread. Fallback to `dispatch_async`
 * on the main queue if the executor doesn't own a thread.
 */
- (void)executeBlockOnJavaScriptQueue:(dispatch_block_t)block;

/**
 * Special case for Timers + ContextExecutor - instead of the default
 *   if jsthread then call else dispatch call on jsthread
 * ensure the call is made async on the jsthread
 */
- (void)executeAsyncBlockOnJavaScriptQueue:(dispatch_block_t)block;

@end
