#include<stdio.h>
char *find_char(char *source, char const *chars) {
    int i = 0;
    while (*(source + i) != '\0') {
        int j = 0;
        while (*(chars + j) != '\0') {
	    if (*(chars + j) == *(source + i)) {
	        return source + i;
	    }
            j++;
        }
    }

    return NULL;
}

int main() {
    char *source = "ABCDEF";
    char *chars = "XZA";

    char *f = find_char(source, chars);
    printf("%c\n", *f);
    return 1;
}
