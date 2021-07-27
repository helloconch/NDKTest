#include <stdio.h>
#include <stdlib.h>

//文件大小的获取
int main4() {
    char *fileName = "/Users/cheyanxu/Desktop/textFile";
    FILE *file = fopen(fileName, "rb");
    if (!file) {
        //退出程序
        printf("文件打开失败，请检查路径:%s\n", fileName);
        exit(0);
    }

    //fseek之后，file有了更丰富的值
    fseek(file, 0, SEEK_END);
    //读取刚刚给file赋值的记录信息
    long fileSize = ftell(file);
    printf("文件大小:%d", fileSize);

    fclose(file);

    return 0;
}


