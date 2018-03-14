#include<stdio.h>
int main() {
    printf("%s", "\"Blunder\?\?!\?\?\"");
    printf("\40\n");
    printf("\100\n");
    printf("\x40\n");
    //printf("\x100\n");
    printf("\0123\n");
    //printf("\x0123\n");
    return 1;
}
