#include <stdio.h>

//指针挪动获取字符串信息

//获取长度1
int getLen(char *str) {
    int count = 0;
    //获取起始指针
    char *strP = str;
    while (*strP) {
        count++;
        strP++;
    }
    return count;
}


//c/c++编译器 数组作为参数传递，会把数组优化成指针（为了高效率）
void getLen2(char str[]) {
    int len = sizeof(str) / sizeof(char);
    printf("getLen2>>%p\n", str);
    printf("getLen2>>>len:%d\n", len);
}

//获取长度2
void getLen3(int *resultLen, char str[]) {
    int count = 0;
    while (*str) {
        str++;
        count++;
    }
    *resultLen = count;
}

int main8() {
    char str[] = {'a', 'b', 'c', '\0'};
    int len = getLen(str);
    printf("len:%d\n", len);

    getLen2(str);

    int *result;
    getLen3(result, str);

    printf("getLen3>>>len:%d", *result);


}
