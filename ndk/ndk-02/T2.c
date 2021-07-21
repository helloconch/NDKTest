#include <stdio.h>

//数值与数组指针
int main2() {
    //错误的写法
    //int []arr = {1, 2, 3, 4};
    int arr[] = {1, 2, 3, 4};

    //遍历数组
    //其它平台不能用 Clion能用，Linux上报错
//    for (int i = 0; i < 4; ++i) {
//
//    }

    //Linux上没有问题 clion、mac没有问题
    int i = 0;
    for (i = 0; i < 4; i++) {
        printf("i:%d\n", arr[i]);
    }

    //数组和指针挂钩
    //数组的内存地址等于第一个元素的内存地址
    //数组的内存地址等于第一元素的内存地址，不是第二个或其它元素的内存地址
    printf("arr = %p\n", arr);
    printf("&arr = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr[0]);

    //既然数组就是一个内存地址
    int *arr_p = arr;
    printf("arr_p = %p\n", arr_p);
    //取出数组中第1个元素的值
    printf("%d\n", *arr_p);

    //指针挪动
    arr_p++;
    //取出数组中第2个元素的值
    printf("%d\n", *arr_p);

    arr_p += 2;
    //取出数组中第4个元素的值
    printf("%d\n", *arr_p);

    arr_p -= 3;
    //取出数组中第1个元素的值
    printf("%d\n", *arr_p);

    return NULL;
}
