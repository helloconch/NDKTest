#include <stdio.h>
#include <ctype.h>

//手动api转化大小写

void lower(char *dest, char *name) {
    while (*name) {
        *dest = tolower(*name);
        name++;
        dest++;
    }
    *dest = '\0';
}

int main11() {
    char *name = "DerrY";

    //
    char dest[20];
    lower(dest, name);
    printf("小写转化后的结果是:%s\n", dest);

    return 0;
}

