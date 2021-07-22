#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体数组
struct Anim {
    char name[10];
    int age;
};

int main15() {
    struct Anim anim[10] = {
            {"a1", 1},
            {"a2", 2},
            {"a3", 3},
            {},
            {},
            {},
            {},
            {},
            {},
            {}
    };
    struct Anim anim9 = {"a9", 9};
    //anim[9] = anim9;
    *(anim + 9) = anim9;
    printf("name:%s age:%d\n", anim[9].name, anim[9].age);


    //堆区
    struct Anim *anim2 = malloc(sizeof(struct Anim) * 10);
    strcpy(anim2->name, "花猫");
    anim2->age = 9;
    printf("name:%s age:%d\n", anim2->name, anim2->age);

    if (anim2) {
        free(anim2);
        anim2 = NULL;
    }

    return 0;
}
