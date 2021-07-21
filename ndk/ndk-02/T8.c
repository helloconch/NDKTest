#include <stdio.h>

void callBackMethod(char *fileName, int current, int total) {
    printf("%s图片压缩的进度是：%d %d\n", fileName, current, total);
}

void compress(char *filename, void(*callBackP)(char *, int, int)) {
    callBackP(filename, 5, 100);
}

//函数指针2
int main() {

    void (*call)(char *, int, int) =callBackMethod;

    compress("aa", call);

    compress("bb", callBackMethod);

    char *cc = "aaaa";
    printf("cc:%s\n", cc);


    return NULL;
}

