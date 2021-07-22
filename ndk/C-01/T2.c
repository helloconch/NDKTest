//
// Created by cheyx on 2021/7/5.
//
#include <stdio.h>

int main2() {
    printf("hello T2\n");

    int i = 100;
    double d = 200;
    float f = 200;
    long l = 100;
    short s = 100;
    char c = 'c';
    //字符串
    char * str="hello";

    //需要占位才能打印
    printf("i : %d \n", i);
    //lf f:小数点  l:双精度
    printf("d : %lf\n", d);
    printf("f : %f\n", f);
    printf("l : %d\n", l);
    printf("s : %d\n", s);
    printf("c : %c\n", c);
    printf("str : %s\n", str);


    return 0;
}

