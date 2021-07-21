#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//结构体指针
struct Cat {
    char name[10];
    int age;
};

int main14() {

    //栈区
    struct Cat cat = {"小花猫", 2};
    struct Cat *catP = &cat;
    // ->调用一级指针
    catP->age = 3;
    strcpy(catP->name, "狸猫");
    printf("name:%s age:%d\n", catP->name, catP->age);

    //堆区
    struct Cat *cat2 = malloc(sizeof(struct Cat));
    // ->调用一级指针
    cat2->age = 2;
    strcpy(cat2->name, "狸猫2");
    printf("name:%s age:%d\n", cat2->name, cat2->age);
    if (cat2) {
        free(cat2);
        cat2 = NULL;
    }


    return 0;
}