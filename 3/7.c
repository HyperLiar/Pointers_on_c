#include<stdio.h>
int main() {
    enum Liquid { OUNCE = 1, CUP = 8, PINT = 16, QUART = 32, GALLON = 32 };
    enum Liquid jar;

    jar = QUART;
    printf("%s\n", jar);
    jar = jar + PINT;
    printf("%s\n", jar);
    return 1;
}
