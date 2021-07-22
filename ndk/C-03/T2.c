#include <stdio.h>
#include <unistd.h>

//静态开辟

//进栈
void staticAction() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
        printf("%d ,%p", *(arr + i), (arr + i));
    }
}
//函数的末尾会弹栈（隐士）执行完毕会弹栈，会释放所有的栈成员。



int main2() {

    //栈区：占用内存大小跟平台有关，平均值2m

//    int arr[10*1024*1024];  4*10m  会导致栈溢出

//堆区：占用内存大小跟平台有关，最大值：大概80% 基本不用担心，堆区很大


    while (9){
        sleep(100);
        staticAction();
    }


    return 0;
}

