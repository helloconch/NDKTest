#include <stdio.h>

//枚举 int类型
enum CommentType {
    TEXT = 10,
    TEXT_IMAGE,
    IMAGE
};

typedef enum CommentType CommentType;

int main() {
    enum CommentType c0 = TEXT;
    CommentType c1 = IMAGE;
    printf("%d %d\n", c0, c1);

    return 0;
}

