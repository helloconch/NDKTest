#include <stdio.h>

//多级指针
//指针存放的是内存地址，但是自己也有内存地址
int main1() {
    printf("Hello, World!\n");

    int num = 999;
    //一级指针，在真实开发中，最多三级指针
    int *num_p = &num;
    printf("num_p:%p\n", num_p);
    //二级指针
    int **num_p_p = &num_p;
    printf("num_p_p:%p\n", num_p_p);
    //三级指针
    int ***num_p_p_p = &num_p_p;
    printf("num_p_p_p:%p\n", num_p_p_p);

    printf("最终值:%d\n", *num_p);
    printf("最终值:%d\n", **num_p_p);
    printf("最终值:%d\n", ***num_p_p_p);

    return 0;
}
