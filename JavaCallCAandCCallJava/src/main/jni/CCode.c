#include <jni.h>
//
// Created by crest on 2017/5/18.
//
JNIEXPORT jintArray JNICALL Java_com_example_jiangchuanfa_javacallcaandccalljava_Call_increaseArrayEles
        (JNIEnv *env, jobject jobj, jintArray jarray){
    jsize size = (*env)->GetArrayLength(env,jarray);
    jint jArrayNative [size];
    (*env)->GetIntArrayRegion(env,jarray,0,size,jArrayNative);
    int i;
    for (int i = 0; i <size ; ++i) {
        *(jArrayNative+i)+=10;
    }
    (*env)->SetIntArrayRegion(env,jarray,0,size,jArrayNative);
    return jarray;
};
