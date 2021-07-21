#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//如何自己学会阅读C语言API文档
int main1() {
    srand((unsigned) time(NULL));

    for (int i = 0; i < 10; i++) {
        printf("随机数:%d\n", rand() % 100);
    }


    //字符串拷贝
    char strArr[10];
    char *content = "hello";
    strcpy(strArr, content);
    printf("%s\n", strArr);


    //布尔

    //非0就是true

    if(0){
        printf("真\n");
    } else{
        printf("假\n");
    }

    return 0;
}
