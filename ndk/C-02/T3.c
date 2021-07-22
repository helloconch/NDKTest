#include <stdio.h>
//采用指针遍历数组
int main3() {
    int arr[] = {1, 2, 3, 4};

    int *arr_p = arr;

    int i = 0;
    for (i = 0; i < 4; i++) {
        //连续的内存空间数组，每次挪动4个字节==int所占的字节数
        printf("pos:%d value:%d \n", i, *(arr_p + i));
        printf("pos:%d 内存地址:%p \n", i,  (arr_p + i));
    }

    return NULL;
}
