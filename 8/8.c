#include<stdio.h>
#include<stdlib.h>
#define MAX 8
int queen[MAX], num = 0;

int check(int n) {
    for (int i = 0; i < n; i++) {
        if (queen[i] == queen[n] || n - i == abs(queen[n] - queen[i])) {
            return 0;
        }
    }
    return 1;
}

void set(int n) {
    for (int i = 0; i < MAX; i++) {
        queen[n] = i;
        if (check(n)) {
            if (n == MAX -1) {
                num++;
            } else {
                set(n + 1);
            }
        }
    }
}

int main() {
    set(0);
    printf("%d\n", num);
    return 1;
}
