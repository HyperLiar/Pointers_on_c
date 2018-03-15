#include<stdio.h>
void reverse_string( char *string) {
    char *last_str;
    for ( last_str = string; *last_str != '\0'; last_str++) {
        ;
    }

    last_str--;

    while (string < last_str) {
        char temp = *last_str;
        *last_str-- = *string;
        *string++ = temp;
    }
}

int main() {
    char *string = "ABCDEFG";
    reverse_string(string);
    printf("%s\n", string);
    return 1;
}
