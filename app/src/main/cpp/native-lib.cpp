#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_wzscan_dev_myheloappl_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ Helo";
    return env->NewStringUTF(hello.c_str());
}
