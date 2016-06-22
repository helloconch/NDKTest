#include "com_ndk_n_ServerDataHelper.h"

jstring JNICALL Java_com_ndk_n_ServerDataHelper_getDataFromServer
        (JNIEnv *env, jobject jobject1) {
    return (*env)->NewStringUTF(env, "data from server");
}


