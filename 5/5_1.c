#include<stdio.h>
#include<ctype.h>
int main () {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 'a' - 'A';
        }

        putchar(ch);

        // putchar(tolower(ch));
    }
}
