//
// Created by 车延旭 on 16/6/22.
//
#include "com_ndk_n_LocalDataHelper.h"
jstring JNICALL Java_com_ndk_n_LocalDataHelper_getDataFromNative
  (JNIEnv *env, jobject obj){
  return (*env)->NewStringUTF(env,"data from native");
  }

