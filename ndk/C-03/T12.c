#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void myHello(char *result, char *name, int start, int end) {
    char *temp = name;
    int count = 0;
    while (*temp) {
        if (count >= start && count < end) {
            *result = *temp;
            result++;
        }
        temp++;
        count++;
    }
}

void myHello2(char **result, char *name, int start, int end) {
    char *temp = name;
    char resultArr[end - start];
    int count = 0;
    for (int i = start; i < end; i++) {
        resultArr[count] = *(temp + i);
        count++;
    }
    //copy防止出栈时被回收
    strcpy(*result, resultArr);
}

void myHello3(char **result, char *name, int start, int end) {
    char *temp = name;
    //堆区，弹栈时不会被回收
    char *resultArr = malloc(end - start);
    int count = 0;
    for (int i = start; i < end; i++) {
        resultArr[count] = *(temp + i);
        count++;
    }
    *result = resultArr;
}


void myHello4(char *result, char *name, int start, int end) {
    for (int i = start; i < end; i++) {
        *(result++) = *(name + i);
    }
}


void myHello5(char *result, char *name, int start, int end) {
    strncpy(result, name + start, end - start);
}

int main12() {
//    char *name = "ABCdefg";
//    char *result;
//    myHello(result, name, 2, 5);
//    printf("result:%s\n", result);

//    char *result3;
//    char *name3 = "ABCdefg";
//    myHello3(&result3, name3, 2, 5);
//    printf("result3:%s\n", result3);


//    char *result4;
//    char *name4 = "ABCdefg";
//    myHello4(result4, name4, 2, 5);
//    printf("result4:%s\n", result4);

    char *result5;
    char *name5 = "ABCdefg";
    myHello5(result5, name5, 2, 5);
    printf("result5:%s\n", result5);
}
