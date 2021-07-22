#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mm_malloc.h>

//结构体定义与使用
struct Dog {
    char name[10];
    int age;
    char sex;
};


struct Person {
    char *name;
    int age;
    char sex;
} person = {"c", 10, 'M'}, p2;


struct Study {
    char *studyContent;
};

struct Student {
    char name[10];
    int age;
    char sex;
    struct Study study;
    struct Wan {
        char *wanContent;
    } wan;
};

int main13() {

    struct Dog dog;
    strcpy(dog.name, "旺财");
    dog.age = 3;
    dog.sex = 'G';

    printf("name:%s age:%d sex:%c\n", dog.name, dog.age, dog.sex);
    printf("name:%s age:%d sex:%c\n", person.name, person.age, person.sex);

    p2.name = "d";
    printf("p2 name:%s\n", p2.name);


    struct Student student = {"小李", 10, 'G',
                              {"学习C"},
                              {"王者"}};

    printf("name:%s age:%d sex:%c study:%s  wan:%s\n",
           student.name, student.age, student.sex,
           student.study.studyContent,
           student.wan.wanContent);

    return 0;
}
