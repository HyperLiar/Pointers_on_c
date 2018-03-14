#include<stdlib.h>
#include<stdio.h>
size_t strlen_t(char *string) {
    int length = 0;
    while ( *string++ != '\0' ) {
       length ++;
    }

    return length;
}

int main() {
    char *string = "Pointers on c";
    size_t length = strlen_t(string);
    printf("%lu\n", length);
    return 1;
}
