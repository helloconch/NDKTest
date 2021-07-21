#include <stdio.h>

//循环时给数组赋值
int main4() {
    int arr[4];
    int *arrP = arr;
    int i = 0;
    for (i = 0; i < 4; i++) {
        *(arrP + i) = (i + 1);
    }

    for (i = 0; i < 4; i++) {
        printf("pos:%d value:%d \n", i, arr[i]);
    }


    printf("sizeof(arr) :%d\n", sizeof(arr));
    printf("sizeof(int) :%d\n", sizeof(int));


    return NULL;
}

