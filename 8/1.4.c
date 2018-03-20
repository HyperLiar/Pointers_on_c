#include<stdio.h>
#define SIZE 50
int x[SIZE];
int y[SIZE];
int i;
int *p1, *p2;
void try1() {
    for (i = 0; i < SIZE; i++) {
        x[i] = y[i];
    }
}

void try2() {
    for (p1 = x, p2 = y; p1 -x < SIZE;) {
        *p1++ = *p2++;
    }
}

void try3() {
    for( i = 0, p1 = x, p2 = y; i < SIZE; i++) {
        *p1++ = *p2++;
    }
}

void try4() {
    register int *p1, *p2;
    register int i;
    for (i = 0, p1 = x, p2 = y; i < SIZE; i++) {
        *p1++ = *p2++;
    }
}

void try5() {
    register int *p1, *p2;
    for (p1 = x, p2 = y; p1 < &x[SIZE];) {
        *p1++ = *p2++;
    }
}
