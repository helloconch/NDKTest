#include <stdio.h>

//数值互换
//只接受指针
void update(int *m, int *n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}


int main() {
    int a = 100;
    int b = 200;

    printf("a address:%p value:%d\n", &a, a);
    int temp = a;
    printf("temp address:%p value:%d\n", &temp, temp);

    *(&a) = b;
    *(&b) = temp;

    printf("a:%d b:%d \n", a, b);


    int m = 1;
    int n = 2;

    update(&m, &n);

    printf("change后效果m:%d  n:%d", m, n);

    return NULL;
}
