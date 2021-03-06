/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_speextest_dao_Speex */

#ifndef _Included_com_speextest_dao_Speex
#define _Included_com_speextest_dao_Speex
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_speextest_dao_Speex
 * Method:    open
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_speextest_dao_Speex_open
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_speextest_dao_Speex
 * Method:    getFrameSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_speextest_dao_Speex_getFrameSize
  (JNIEnv *, jobject);

/*
 * Class:     com_speextest_dao_Speex
 * Method:    decode
 * Signature: ([B[SI)I
 */
JNIEXPORT jint JNICALL Java_com_speextest_dao_Speex_decode
  (JNIEnv *, jobject, jbyteArray, jshortArray, jint);

/*
 * Class:     com_speextest_dao_Speex
 * Method:    encode
 * Signature: ([SI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_speextest_dao_Speex_encode
  (JNIEnv *, jobject, jshortArray, jint, jbyteArray, jint);

/*
 * Class:     com_speextest_dao_Speex
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_speextest_dao_Speex_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
