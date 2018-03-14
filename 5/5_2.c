#include<stdio.h>
int main() {
    char ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch += (ch - 'a' - 13) < 0 ? 13 : -13;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch += (ch - 'A' - 13) < 0 ? 13 : -13;
        }

        putchar(ch);
    }
}
