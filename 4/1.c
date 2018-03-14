#include<stdio.h>
int main() {
    int a = 10;
    double b;
    while ( a / b != b) {
        b = ( b + a / b) / 2;
    }

    printf("%lf\n", b);
    return 1;
}
