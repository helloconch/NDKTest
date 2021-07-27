//文件加密与文件解密
#include <stdio.h>
#include <stdlib.h>

//文件解密
int main() {

    //加密后的文件来源
    char *fileNameStrEncode = "/Users/cheyanxu/Desktop/textFile_encode";
    //解密
    char *fileName = "/Users/cheyanxu/Desktop/textFile_decode";
    FILE *fileDecode = fopen(fileName, "wb");
    FILE *fileEncode = fopen(fileNameStrEncode, "rb");
    if (!fileDecode || !fileEncode) {
        printf("文件打开失败！");
        exit(0);
    }

    //加密 ==破坏文件
    //解密 == 还原之前的样子

    //加密：把每个字节拿出来，对每个字节全部处理

    int c;
    //fgetc返回值EOF = end of file
    while ((c = fgetc(fileEncode)) != EOF) {
        //加密操作
        fputc(c ^ 5, fileDecode);
    }
    fclose(fileDecode);
    fclose(fileEncode);

    return 0;
}
