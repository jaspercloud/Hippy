// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     com/tencent/smtt/flexbox/FlexNode

#ifndef com_tencent_smtt_flexbox_FlexNode_JNI
#define com_tencent_smtt_flexbox_FlexNode_JNI

#include <jni.h>
#include "FlexNodeUtil.h"

// Step 1: forward declarations.
namespace {
const char kFlexNodeClassPath[] = "com/tencent/smtt/flexbox/FlexNode";
// Leaking this jclass as we cannot use LazyInstance from some threads.
}  // namespace

// Step 2: method stubs.

static jlong FlexNodeNew(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT jlong
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNew(JNIEnv* env,
    jobject jcaller) {
  return FlexNodeNew(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeFree(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeFree");
  return native->FlexNodeFree(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeInsertChild(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jlong childPointer,
    jint index) {
   FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeInsertChild");
  return native->FlexNodeInsertChild(env,
      base::android::JavaParamRef<jobject>(env, jcaller), childPointer, index);
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeRemoveChild(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jlong childPointer) {
   FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeRemoveChild");
  return native->FlexNodeRemoveChild(env,
      base::android::JavaParamRef<jobject>(env, jcaller), childPointer);
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeCalculateLayout(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat width,
    jfloat height,
    jlongArray nativeNodes,
    jobjectArray javaNodes,
    jint direction) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeCalculateLayout");
  return native->FlexNodeCalculateLayout(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      width,
      height,
      base::android::JavaParamRef<jlongArray>(env, nativeNodes),
      base::android::JavaParamRef<jobjectArray>(env, javaNodes),
	  direction);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetWidth(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetWidth", 0);
  return native->FlexNodeGetWidth(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetWidth(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode,
    jfloat Width) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetWidth");
  return native->FlexNodeSetWidth(env, base::android::JavaParamRef<jobject>(env,
      jcaller), Width);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetHeight(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetHeight", 0);
  return native->FlexNodeGetHeight(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetHeight(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode,
    jfloat Height) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetHeight");
  return native->FlexNodeSetHeight(env,
      base::android::JavaParamRef<jobject>(env, jcaller), Height);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetTop(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetTop", 0);
  return native->FlexNodeGetTop(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetTop(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode,
    jfloat Top) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetTop");
  return native->FlexNodeSetTop(env, base::android::JavaParamRef<jobject>(env,
      jcaller), Top);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetLeft(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetLeft", 0);
  return native->FlexNodeGetLeft(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetLeft(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode,
    jfloat Left) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetLeft");
  return native->FlexNodeSetLeft(env, base::android::JavaParamRef<jobject>(env,
      jcaller), Left);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetRight(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetRight", 0);
  return native->FlexNodeGetRight(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetRight(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode,
    jfloat Right) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetRight");
  return native->FlexNodeSetRight(env, base::android::JavaParamRef<jobject>(env,
      jcaller), Right);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBottom(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetBottom", 0);
  return native->FlexNodeGetBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBottom(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode,
    jfloat Bottom) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetBottom");
  return native->FlexNodeSetBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller), Bottom);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginLeft(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetMarginLeft", 0);
  return native->FlexNodeGetMarginLeft(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginLeft(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat MarginLeft) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetMarginLeft");
  return native->FlexNodeSetMarginLeft(env,
      base::android::JavaParamRef<jobject>(env, jcaller), MarginLeft);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginTop(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetMarginTop", 0);
  return native->FlexNodeGetMarginTop(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginTop(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat MarginTop) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetMarginTop");
  return native->FlexNodeSetMarginTop(env,
      base::android::JavaParamRef<jobject>(env, jcaller), MarginTop);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginRight(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetMarginRight", 0);
  return native->FlexNodeGetMarginRight(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginRight(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat MarginRight) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetMarginRight");
  return native->FlexNodeSetMarginRight(env,
      base::android::JavaParamRef<jobject>(env, jcaller), MarginRight);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginBottom(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetMarginBottom", 0);
  return native->FlexNodeGetMarginBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginBottom(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat MarginBottom) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetMarginBottom");
  return native->FlexNodeSetMarginBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller), MarginBottom);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingLeft(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetPaddingLeft", 0);
  return native->FlexNodeGetPaddingLeft(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingLeft(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat PaddingLeft) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetPaddingLeft");
  return native->FlexNodeSetPaddingLeft(env,
      base::android::JavaParamRef<jobject>(env, jcaller), PaddingLeft);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingTop(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetPaddingTop", 0);
  return native->FlexNodeGetPaddingTop(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingTop(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat PaddingTop) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetPaddingTop");
  return native->FlexNodeSetPaddingTop(env,
      base::android::JavaParamRef<jobject>(env, jcaller), PaddingTop);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingRight(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetPaddingRight", 0);
  return native->FlexNodeGetPaddingRight(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingRight(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat PaddingRight) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetPaddingRight");
  return native->FlexNodeSetPaddingRight(env,
      base::android::JavaParamRef<jobject>(env, jcaller), PaddingRight);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingBottom(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetPaddingBottom", 0);
  return native->FlexNodeGetPaddingBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingBottom(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat PaddingBottom) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetPaddingBottom");
  return native->FlexNodeSetPaddingBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller), PaddingBottom);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderLeft(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetBorderLeft", 0);
  return native->FlexNodeGetBorderLeft(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderLeft(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat BorderLeft) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetBorderLeft");
  return native->FlexNodeSetBorderLeft(env,
      base::android::JavaParamRef<jobject>(env, jcaller), BorderLeft);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderTop(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetBorderTop", 0);
  return native->FlexNodeGetBorderTop(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderTop(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat BorderTop) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetBorderTop");
  return native->FlexNodeSetBorderTop(env,
      base::android::JavaParamRef<jobject>(env, jcaller), BorderTop);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderRight(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetBorderRight", 0);
  return native->FlexNodeGetBorderRight(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderRight(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat BorderRight) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetBorderRight");
  return native->FlexNodeSetBorderRight(env,
      base::android::JavaParamRef<jobject>(env, jcaller), BorderRight);
}

JNI_GENERATOR_EXPORT jfloat
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderBottom(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeGetBorderBottom", 0);
  return native->FlexNodeGetBorderBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderBottom(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode,
    jfloat BorderBottom) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeSetBorderBottom");
  return native->FlexNodeSetBorderBottom(env,
      base::android::JavaParamRef<jobject>(env, jcaller), BorderBottom);
}
JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeMarkDirty(JNIEnv*
    env, jobject jcaller,
    jlong nativePointer) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativePointer);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeNodeMarkDirty");
  return native->FlexNodeNodeMarkDirty(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeIsDirty(JNIEnv*
    env, jobject jcaller,
    jlong nativePointer) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativePointer);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeNodeIsDirty", false);
  return native->FlexNodeNodeIsDirty(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeSetHasMeasureFunc(JNIEnv*
    env, jobject jcaller,
    jlong nativePointer,
    jboolean hasMeasureFunc) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativePointer);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeNodeSetHasMeasureFunc");
  return native->FlexNodeNodeSetHasMeasureFunc(env,
      base::android::JavaParamRef<jobject>(env, jcaller), hasMeasureFunc);
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeSetHasBaselineFunc(JNIEnv*
    env, jobject jcaller,
    jlong nativePointer,
    jboolean hasMeasureFunc) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativePointer);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodeNodeSetHasBaselineFunc");
  return native->FlexNodeNodeSetHasBaselineFunc(env,
      base::android::JavaParamRef<jobject>(env, jcaller), hasMeasureFunc);
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodemarkHasNewLayout(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodemarkHasNewLayout");
  return native->FlexNodemarkHasNewLayout(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodehasNewLayout(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodehasNewLayout", false);
  return native->FlexNodehasNewLayout(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodemarkLayoutSeen(JNIEnv*
    env, jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodemarkLayoutSeen");
  return native->FlexNodemarkLayoutSeen(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodereset(JNIEnv* env,
    jobject jcaller,
    jlong nativeFlexNode) {
  FlexNode* native = reinterpret_cast<FlexNode*>(nativeFlexNode);
  CHECK_NATIVE_PTR(env, jcaller, native, "FlexNodereset");
  return native->FlexNodeReset(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static jlong Java_FlexNode_measureFunc(JNIEnv* env,
    jobject obj,
    jfloat width,
    jint widthMode,
    jfloat height,
    jint heightMode) {
  jclass clazz = env->FindClass(kFlexNodeClassPath);
  jmethodID method_id = env->GetMethodID(clazz, "measureFunc", "("
"F"
"I"
"F"
"I"
")"
"J");
  jlong ret =
      env->CallLongMethod(obj,
          method_id, width, widthMode, height, heightMode);

  env->DeleteLocalRef( clazz );
  // env->DeleteLocalRef( method_id );
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsFlexNode[] = {
    { "nativeFlexNodeNew",
"("
")"
"J",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNew)
    },
    { "nativeFlexNodeFree",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeFree)
    },
     { "nativeFlexNodeInsertChild",
"("
"J"
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeInsertChild)
    },
    { "nativeFlexNodeRemoveChild",
"("
"J"
"J"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeRemoveChild)
    },
    { "nativeFlexNodeCalculateLayout",
"("
"J"
"F"
"F"
"[J"
"[Lcom/tencent/smtt/flexbox/FlexNode;"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeCalculateLayout)
    },
    { "nativeFlexNodeGetWidth",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetWidth)
    },
    { "nativeFlexNodeSetWidth",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetWidth)
    },
    { "nativeFlexNodeGetHeight",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetHeight)
    },
    { "nativeFlexNodeSetHeight",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetHeight)
    },
    { "nativeFlexNodeGetTop",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetTop)
    },
    { "nativeFlexNodeSetTop",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetTop)
    },
    { "nativeFlexNodeGetLeft",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetLeft)
    },
    { "nativeFlexNodeSetLeft",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetLeft)
    },
    { "nativeFlexNodeGetRight",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetRight)
    },
    { "nativeFlexNodeSetRight",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetRight)
    },
    { "nativeFlexNodeGetBottom",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBottom)
    },
    { "nativeFlexNodeSetBottom",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBottom)
    },
    { "nativeFlexNodeGetMarginLeft",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginLeft)
    },
    { "nativeFlexNodeSetMarginLeft",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginLeft)
    },
    { "nativeFlexNodeGetMarginTop",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginTop)
    },
    { "nativeFlexNodeSetMarginTop",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginTop)
    },
    { "nativeFlexNodeGetMarginRight",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginRight)
    },
    { "nativeFlexNodeSetMarginRight",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginRight)
    },
    { "nativeFlexNodeGetMarginBottom",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetMarginBottom)
    },
    { "nativeFlexNodeSetMarginBottom",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetMarginBottom)
    },
    { "nativeFlexNodeGetPaddingLeft",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingLeft)
    },
    { "nativeFlexNodeSetPaddingLeft",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingLeft)
    },
    { "nativeFlexNodeGetPaddingTop",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingTop)
    },
    { "nativeFlexNodeSetPaddingTop",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingTop)
    },
    { "nativeFlexNodeGetPaddingRight",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingRight)
    },
    { "nativeFlexNodeSetPaddingRight",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingRight)
    },
    { "nativeFlexNodeGetPaddingBottom",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetPaddingBottom)
    },
    { "nativeFlexNodeSetPaddingBottom",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetPaddingBottom)
    },
    { "nativeFlexNodeGetBorderLeft",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderLeft)
    },
    { "nativeFlexNodeSetBorderLeft",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderLeft)
    },
    { "nativeFlexNodeGetBorderTop",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderTop)
    },
    { "nativeFlexNodeSetBorderTop",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderTop)
    },
    { "nativeFlexNodeGetBorderRight",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderRight)
    },
    { "nativeFlexNodeSetBorderRight",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderRight)
    },
    { "nativeFlexNodeGetBorderBottom",
"("
"J"
")"
"F",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeGetBorderBottom)
    },
    { "nativeFlexNodeSetBorderBottom",
"("
"J"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeSetBorderBottom)
    },
      { "nativeFlexNodeNodeMarkDirty",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeMarkDirty)
    },
    { "nativeFlexNodeNodeIsDirty",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeIsDirty)
    },
    { "nativeFlexNodeNodeSetHasMeasureFunc",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeSetHasMeasureFunc)
    },
    { "nativeFlexNodeNodeSetHasBaselineFunc",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodeNodeSetHasBaselineFunc)
    },
      { "nativeFlexNodemarkHasNewLayout",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodemarkHasNewLayout)
    },
    { "nativeFlexNodehasNewLayout",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodehasNewLayout)
    },
    { "nativeFlexNodemarkLayoutSeen",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodemarkLayoutSeen)
    },
   { "nativeFlexNodereset",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_com_tencent_smtt_flexbox_FlexNode_nativeFlexNodereset)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  const int kMethodsFlexNodeSize = arraysize(kMethodsFlexNode);
  jclass clazz = env->FindClass(kFlexNodeClassPath);
  if (env->RegisterNatives(clazz,
                           kMethodsFlexNode,
                           kMethodsFlexNodeSize) < 0) {
    return false;
  }
  env->DeleteLocalRef( clazz );
  return true;
}

#endif  // com_tencent_smtt_flexbox_FlexNode_JNI
