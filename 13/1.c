#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int is_not_print( int ch) {
    return !isprint(ch);
}

static int (*test_func[]) (int) = {
    iscntrl,
    isspace,
    isdigit,
    islower,
    isupper,
    ispunct,
    is_not_print,
};

#define N_CATEGORIES\
     (sizeof(test_func) / sizeof( test_func[0]))

char *label[] = {
    "control",
    "whitespace",
    "digit",
    "lower case",
    "upper case",
    "punctuation",
    "non-printable"
};

int count[ N_CATEGORIES ];
int total;

int main() {
    int ch;
    int category;

    while( (ch = getchar()) != EOF) {
        total += 1;
        for (category = 0; category < N_CATEGORIES; category += 1) {
            if (test_func[category] (ch))
                count[ category ] += 1;
        }
    }

    if (total == 0) {
        printf("No characters in the input!\n");
    } else {
        for (category = 0; category < N_CATEGORIES; category += 1) {
            printf("%3.0f%% %s characters\n", count[category] * 100.00 / total,
                label[category]);
        }
    }

    return EXIT_SUCCESS;
}
