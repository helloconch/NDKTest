#include <stdio.h>

//指针类型有何用
int main6() {
    int num = 12;
    int *fff = &num;
    double *aaa = fff;

    //指针栈的内存大小
    //指针占用的内存大小 int* double* 32位 4字节  64位8字节
    printf("栈的内存:%d\n", sizeof(fff));
    printf("栈的内存:%d\n", sizeof(aaa));

    return NULL;
}

