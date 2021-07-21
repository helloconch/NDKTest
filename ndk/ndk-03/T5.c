#include <stdio.h>
#include <stdlib.h>

//动态开辟realloc
int main5() {

    int num;
    printf("请输入数的个数\n");
    //获取用户输入的值
    scanf("%d", &num);


    int *arr = malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++) {
        //arr[i] = (i + 1000);
        *(arr + i) = (i + 1000);
        printf("%d  value:%d\n", i, *(arr + i));
    }

    printf("开辟的内存地址:%p\n", arr);


    //新增
    printf("请输入新增的大小");
    int new_num;
    scanf("%d", &new_num);

    //原来的大小+新增的大小
    int *new_arr = realloc(arr, sizeof(int) * (num + new_num));
    if (new_arr) {
        //new_arr != NULL
        int j = num;
        for (; j < (num + new_num); j++) {
            new_arr[j] = (j + 1000);
        }

        for (int i = 0; i < (num + new_num); i++) {
            printf("%d v:%d\n", i, new_arr[i]);
        }

        printf("新开辟的内存地址:%p\n", new_arr);

        if (new_arr) {
            free(new_arr);
            new_arr = NULL;
            arr = NULL;
        } else {
            free(arr);
            arr = NULL;
        }
    }

    return 0;
}

