#include<stdio.h>
#include<limits.h>
int main() {
    printf("%d, %d, %u", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);
    printf("%d, %d, %u", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("%d, %d, %u", INT_MIN, INT_MAX, UINT_MAX);
    printf("%ld, %ld, %lu", LONG_MIN, LONG_MAX, ULONG_MAX);
    return 1;
}
