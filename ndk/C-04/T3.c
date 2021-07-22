#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//文件的复制

//文档  https://en.cppreference.com/w/c
int main3() {

    char *fileName = "/Users/cheyanxu/Desktop/textFile";
    char *destFileName = "/Users/cheyanxu/Desktop/textFileCopy";
    FILE *file = fopen(fileName, "rb");
    FILE *fileCopy = fopen(destFileName, "wb");

    if (!file || !fileCopy) {
        printf("检查路径\n");
    }

    int buffer[512];
    //每次读取的长度
    int len;
    //params1:容器buffer param2:每次偏移多少 param3:容器大小sizeof(buffer) / sizeof(int)为512
    while ((len = fread(buffer, sizeof(int), sizeof(buffer) / sizeof(int), file)) != 0) {
        fwrite(buffer, sizeof(int), len, fileCopy);
    }

    fclose(file);
    fclose(fileCopy);

    return 0;
}
