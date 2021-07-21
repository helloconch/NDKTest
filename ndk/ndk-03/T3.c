#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//动态开辟

//malloc凡是在堆区开辟的内存空间，属于动态开辟范畴

void dynamicAction() {

    int *p;//野指针，没有地址的空的

    //void *可以任意转变 int * double*
    //堆区开辟1m
    int *arr = malloc(1 * 1024 * 1024);
    printf("dynamicAciton>>>arr自己的内存地址:%p ,堆区开辟的内存地址:%p \n",
           &arr, arr);
    //堆区开辟的空间，需释放掉，否则堆区会逐渐增长
    free(arr);
    //重新指向地址，避免free释放完堆后，arr变为悬空指针
    arr = NULL;
}

int main3() {
    while (9) {
        sleep(300);

        dynamicAction();
    }
    return 0;
}

