#include <stdio.h>
#include <stdlib.h>

//动态开辟使用的场景
int main4() {

    //静态开辟的内存大小，是不能修改的
    //int arr[6];

    //开辟的空间，想要变化，动态范畴
    int num;
    printf("请输入数的个数\n");
    //获取用户输入的值
    scanf("%d",&num);

    //动态开辟，用户输入的值 空间的大小
    int *arr = malloc(sizeof(int) * num);
    int print_num;
    for (int i = 0; i < num; i++) {
        printf("请输入第%d个值", i);
        scanf("%d",&print_num);
        arr[i] = print_num;
        printf("%d ,%p\n", *(arr + i), (arr + i));
    }
    return 0;
}
