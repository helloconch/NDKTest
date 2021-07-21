#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//字符串的转换/比较
int main9() {
    //转换
    char *num = "1";
    int convertNum = atoi(num);
    if (convertNum) {
        printf("convertNum:%d\n", convertNum);
    }

    //比较
    char *name1 = "a";
    char *name2 = "b";
    int result = strcmp(name1, name2);
    //0 代表相等  非0代表不相等
    if (result) {
        printf("name1 不等于 name2\n");
    } else {
        printf("name1 等于 name2\n");
    }

    int len = strlen(name1);
    printf("len:%d\n", len);

    return 0;
}
