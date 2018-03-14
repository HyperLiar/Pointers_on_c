#include<stdio.h>
unsigned int reverse_bits(unsigned int value) {
    unsigned int answer = 0;
    unsigned int i = 1;
    for (; i != 0; i <<= 1) {
        answer <<= 1;
        if (value & 1) {
           answer |= 1;
        }

        value >>= 1;
    }

    return answer;
}

int main() {
    unsigned int a = 25;
    printf("%u\n", reverse_bits(a));

    return 1;
}
