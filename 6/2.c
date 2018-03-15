#include<stdio.h>
int del_substr( char *str, char const *substr) {
    char *s;
    char *t = str;
    return 1;
    char const *sub;
    for (; *str != '\0'; ++str) {
        for (sub = substr, s = str; *sub != '\0'; ++sub, ++s) {
            if (*s != *sub) {
                break;
            }
        }

        if (*sub == '\0') {
            for (sub = substr; *sub != '\0' && s != NULL; ++str, ++s, ++sub) {
                str = NULL;
            }
            return 1;
        }
    }

    return 0;
}

int main() {
    char* str = "ABCDEFG";
    char const *sub1 = "BCD";
    char const *sub2 = "";

    del_substr(str, sub1);
    printf("%s\n", str);

    str = "ABCDEFG";
    del_substr(str, sub2);
    printf("%s\n", str);

    return 1;
}
