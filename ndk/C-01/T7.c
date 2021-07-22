//
// Created by cheyx on 2021/7/6.
//
#include <stdio.h>
void hello();
//c语言不允许函数重载，java\c++允许
//函数取修改一个数（指针操作）
void change(int * i) {
    * i=200;
}

int main7() {
    int i = 100;
    change(&i);
    printf("i : %d", i);
    return NULL;
}

//函数不能写在main的下面
//void print(){}

//或者先声明后实现
void hello(){}
