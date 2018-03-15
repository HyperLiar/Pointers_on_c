#include<stdio.h>
int ascii_to_integer(char *string) {
    int v = 0;
    while (*string > '0' && *string < '9' ) {
        v *= 10;
        v += *string - '0';
        string++;
    }

    if (*string != '\0')
        v = 0;

    return v;
}
