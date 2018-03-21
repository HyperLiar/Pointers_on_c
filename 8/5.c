#include<stdio.h>
#include<stdlib.h>
void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z) {
    int *m1p, *m2p;
    int k;
    for (int row = 0; row < x; row ++) {
         for (int col = 0; col < z; col++) {
             m1p = m1 + row * y;
             m2p = m2 + col;
             *r = 0;
             for (k = 0; k < y; k++) {
                 *r += *m1p * *m2p;
                 m1p += 1;
                 m2p += z;
             }
             r++;
         }
    }
}
