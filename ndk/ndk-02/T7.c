#include <stdio.h>

//函数指针(相当于回调)
void add(int num1, int num2) {
    printf("num1+num2=%d\n", (num1 + num2));
}

void mins(int num1, int num2) {
    printf("num1-num2=%d\n", (num1 - num2));
}

//void(*method)(int,int)声明函数指针
//void 返回值
//(*method)函数名
//(int,int)两个参数
void operate(void(*method)(int, int), int num1, int num2) {
    method(num1, num2);
    printf("method函数的指针:%p\n", method);
}

int main7() {

    operate(add, 10, 20);

    operate(mins, 10, 5);

    printf("add函数的指针:%p\n", add);

    return 0;
}

