#include<stdio.h>
int gcd(int m, int n) {
    if ( m <= 0 || n <= 0) {
        return 0;
    }

    while (m != n) {
        if (m > n) {
            return gcd(m - n, n);
        } else {
            return gcd(n - m, m);
        }
    }
}
