//
// Created by cheyx on 2021/7/6.
//
#include <stdio.h>

//通过指针修改值
int main6() {

    int i = 100;

    *(&i)=300;

    int *p = &i;

    *p = 200;

    printf("i : %d", i);


    return NULL;
}
