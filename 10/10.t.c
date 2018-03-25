#include<stdio.h>
#include<stddef.h>
typedef struct ALIGN1 {
    char a;
    int b;
    char c;
} align1;

typedef struct ALIGN2 {
    int a;
    char b;
    char c;
} align2;

int main() {
    align1 a1;
    align2 a2;

    size_t align1_p = sizeof(align1);
    size_t align2_p = sizeof(align2);
    size_t align1_a = offsetof(align1, a);
    size_t align1_b = offsetof(align1, b);
    size_t align1_c = offsetof(align1, c);
    size_t align2_a = offsetof(align2, a);
    size_t align2_b = offsetof(align2, b);
    size_t align2_c = offsetof(align2, c);

    printf("sizeof(a1): %lu, sizeof(a2): %lu", align1_p, align2_p);
    printf("a1_a: %lu, a1_b: %lu, a1_c: %lu", align1_a, align1_b, align1_c);
    printf("a2_a: %lu, a2_b: %lu, a2_c: %lu", align2_a, align2_b, align2_c);
}
