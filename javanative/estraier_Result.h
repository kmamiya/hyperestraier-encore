/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class estraier_Result */

#ifndef _Included_estraier_Result
#define _Included_estraier_Result
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     estraier_Result
 * Method:    get_score
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_estraier_Result_get_1score
  (JNIEnv *, jobject, jint);

/*
 * Class:     estraier_Result
 * Method:    get_shadows
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_estraier_Result_get_1shadows
  (JNIEnv *, jobject, jint);

/*
 * Class:     estraier_Result
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_estraier_Result_destroy
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
