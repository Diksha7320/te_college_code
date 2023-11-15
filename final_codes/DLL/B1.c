#include <jni.h>
#include <stdio.h>
#include "B1.h"

JNIEXPORT void JNICALL Java_B1_add(JNIEnv *env, jobject obj, jint a, jint b)
{
printf("\n%d + %d = %d\n",a,b,(a+b));
}

JNIEXPORT void JNICALL Java_B1_sub(JNIEnv *env, jobject obj, jint a, jint b)
{
 printf("\n%d - %d = %d\n",a,b,(a-b));
}

JNIEXPORT void JNICALL Java_B1_mult(JNIEnv *env, jobject obj, jint a, jint b)
{
 printf("\n%d * %d = %d\n",a,b,(a*b));
}

JNIEXPORT int JNICALL Java_B1_div(JNIEnv *env, jobject obj, jint a, jint b)
{
 printf("\n%d / %d = %d\n",a,b,(a/b));
}