#include<stdio.h>
int ints[20] = {
    10,20,30,40,50,60,70,80,90,100,
    110,120,130,140,150,160,170,180,190,200
};

int *ip = ints + 3;

int main() {
    int *p = &ip[-2];
    int *q = &ip[0];
    //int *q = &ip; this is wrong!
    int *i = ints;
    printf("%p,%p,%p\n",p,q,i);
    return 1;
}
