#include <stdio.h>

int main6() {


    int arrInt[]={1,2,3,4,5,6,7,8,9};

    int result=arrInt[*arrInt+*(arrInt+4)];

    printf("result:%d\n",result);


    return 0;
}

