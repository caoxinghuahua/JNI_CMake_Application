#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_develop_hua_jni_1cmake_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ CMake jni";
    return env->NewStringUTF(hello.c_str());
}
