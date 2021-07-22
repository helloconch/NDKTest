#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//文件的读操作
int main1() {
    //FILE	*fopen(const char * __restrict __filename, const char * __restrict __mode)
    //参数1:文件路径，文件源
    //参数2：模式r(读)w(写)rb(二进制读)wb(二进制写)

    char *fileName = "/Users/cheyanxu/Desktop/textFile";
    FILE *file = fopen(fileName, "r");
    if (!file) {
        //退出程序
        printf("文件打开失败，请检查路径:%s\n", fileName);
        exit(0);
    }
    //先定义缓存区域
    char buffer[10];
    //param1:缓冲区 param2：长度10 param3:文件指针变量
    while (fgets(buffer, 10, file)) {
        printf("%s", buffer);
    }
    //关闭资源
    fclose(file);


    return 0;
}
