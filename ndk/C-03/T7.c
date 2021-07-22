#include <stdio.h>

int main7() {
    //字符串
    char str[] = {'c', 'h', 'e','\0'};
    str[2] = 'a';
    //printf必须遇到\0才结束
    printf("第一种方式:%s\n", str);

    //隐士加了\0
    char *str2 = "che";

    printf("第2种方式:%s\n", str2);
}
