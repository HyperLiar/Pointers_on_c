#include<stdio.h>
int main() {
    int array[4][2];
    int *p1 = array;
    int *p2 = array + 2;
    int *p3 = array[3];
    int *p4 = array[2] - 1;
    int *p5 = &array[1][2];
    int *p6 = &array[2][0];
    printf("%p,%p,%p,%p,%p,%p\n", p1,p2,p3,p4,p5,p6);
    return 1;
}
