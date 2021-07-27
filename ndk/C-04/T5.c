//文件加密与文件解密
#include <stdio.h>
#include <stdlib.h>

int main5() {
    //来源
    char *fileName = "/Users/cheyanxu/Desktop/textFile";
    //加密后的文件
    char *fileNameStrEncode = "/Users/cheyanxu/Desktop/textFile_encode";
    FILE *file = fopen(fileName, "rb");
    FILE *fileEncode = fopen(fileNameStrEncode, "wb");
    if (!file || !fileEncode) {
        printf("文件打开失败！");
        exit(0);
    }

    //加密 ==破坏文件
    //解密 == 还原之前的样子

    //加密：把每个字节拿出来，对每个字节全部处理

    int c;
    //fgetc返回值EOF = end of file
    while ((c = fgetc(file)) != EOF) {
        //加密操作
        fputc(c ^ 5, fileEncode);
    }
    fclose(file);
    fclose(fileEncode);

    return 0;
}
