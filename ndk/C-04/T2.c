#include <stdio.h>
#include <stdlib.h>

//文件的写操作
int main2() {
    //FILE	*fopen(const char * __restrict __filename, const char * __restrict __mode)
    //参数1:文件路径，文件源
    //参数2：模式r(读)w(写)rb(二进制读)rw(二进制写)

    char *fileName = "/Users/cheyanxu/Desktop/textFileUpdate";
    //文件不存在，会自动生成
    FILE *file = fopen(fileName, "w");
    if (!file) {
        //退出程序
        printf("文件打开失败，请检查路径:%s\n", fileName);
        exit(0);

    }

    fputs("hello file write", file);
    fclose(file);

    return 0;
}
