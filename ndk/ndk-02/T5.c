#include <stdio.h>
//数组获取值的方法
int main5() {

    int arr[] = {1, 2, 3, 4};

    int *arrP = arr;

    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
        printf("%d\n", *(arrP + i));
    }

    return NULL;
}

