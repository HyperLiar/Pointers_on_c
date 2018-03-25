#include<stdio.h>
struct {
    int a:2;
} x;

int main() {
    x.a = 1;
    x.a += 1;
    printf("%d\n", x.a);
}
