#include <jni.h>
#include <string>

jint multiplyNumbers(jint n);

extern "C" JNIEXPORT jstring

JNICALL
Java_com_sbw_calculator_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


//Addition function
extern "C" JNIEXPORT jint JNICALL
Java_com_sbw_calculator_MainActivity_add( JNIEnv *env, jobject, jint x, jint y) {

    //return an integer
    return x + y;
}

//Subtraction function
extern "C" JNIEXPORT jint JNICALL
Java_com_sbw_calculator_MainActivity_sub(JNIEnv *env, jobject, jint x, jint y){
    return x - y;
}

//Multiplication function
extern "C" JNIEXPORT jint JNICALL
Java_com_sbw_calculator_MainActivity_multiply(JNIEnv *env, jobject, jint x, jint y){
    return x * y;
}

//Division function
extern "C" JNIEXPORT jfloat JNICALL
Java_com_sbw_calculator_MainActivity_divide(JNIEnv *env, jobject, jint x, jint y){
    return x / y;
}


//Factorial of a Number
extern "C" JNIEXPORT jint JNICALL
Java_com_sbw_calculator_MainActivity_factorial(JNIEnv *env, jobject, jint n){
    return multiplyNumbers(n);
}

jint multiplyNumbers(jint n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

