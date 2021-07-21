#include <stdio.h>
#include <stdlib.h>

//别名
struct Worker {
    char name[10];
    int age;
    char sex;
};

//c库、系统源码为什么typedef 且与结构体一样的名字，为了兼容
//给结构体取名字
typedef struct Worker Worker;
//给结构体指针取名字
typedef struct Worker *workerP;


//匿名结构体别名
typedef struct {
    char name[10];
    int age;
    char sex;
} School;

int main16() {
    //Vs Clion 它们是一样的写法
    Worker *worker = malloc(sizeof(Worker));

    School school = {"s1", 1, 'G'};

    School *schoolP = malloc(sizeof(School));


    return 0;
}

