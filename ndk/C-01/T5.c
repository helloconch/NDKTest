//
// Created by cheyx on 2021/7/5.
//
#include <stdio.h>

int main5() {

    int number_int = 100;
    double number_double = 200;

    printf("number_int value:%d\n", number_int);
    printf("number_double value:%lf\n", number_double);

    //指针取出值

    //既然任何变量都是地址，可以使用获取值
    //*取出地址中的值 *（&value)
    printf("number_int value:%d\n", *(&number_int));
    printf("number_double value:%lf\n", *(&number_double));

    //指针类型  int *  int类型的指针  指针永远存放内存地址
    //intP doubleP 属于指针变量 就是一个变量
    int *intP = &number_int;
    double *doubleP = &number_double;

    printf("number_int value:%d\n", *intP);
    printf("number_double value:%lf\n", *doubleP);


    return NULL;
}

