#include <stdio.h>
#include <string.h>

int main10() {

    //字符串查找
    char *text = "name is Deee";

    char *subText = "D";

    char *result = strstr(text, subText);

    if (result) {
        printf("查找到以D开头的字符串:%s\n", result);
    } else {
        printf("未查找到");
    }

    //查找位置
    int index = result - text;
    printf("%s 第一次出现的位置index:%d\n", subText, index);

    //字符串拼接
    char destination[25];
    char *blank = "--到--", *CPP = "c++", *Java = "Java";
    //先拷贝后拼接
    strcpy(destination, CPP);
    strcat(destination, blank);
    strcat(destination, Java);
    printf("打印拼接后的结果:%s\n",destination);

    return 0;
}

