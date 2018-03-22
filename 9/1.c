#include<stdio.h>
#include<ctype.h>
int main() {
    int total = 0;
    int con = 0;
    int blk = 0;
    int dig = 0;
    int low = 0;
    int hig = 0;
    int pun = 0;
    int unp = 0;

    char i;

    while ( (i = getchar()) != '\n') {
        if (iscntrl(i)) {
            con++;
        }
        if (isspace(i)) {
            blk++;
        }
        if (isdigit(i)) { 
            dig++;
        }
        if (islower(i)) {
            low++;
        }
        if (isupper(i)) {
            hig++;
        }
        if (ispunct(i)) {
            pun++;
        }
        if (!isprint(i)) {
            unp++;
        }

        total++;
    }

    printf("total: %d\n", total);
    printf("con: %d\n", con);
    printf("blk: %d\n", blk);
    printf("dig: %d\n", dig);
    printf("low: %d\n", low);
    printf("hig: %d\n", hig);
    printf("pun: %d\n", pun);
    printf("unp: %d\n", unp);
}
