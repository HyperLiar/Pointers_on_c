#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {
    int exit_status = EXIT_SUCCESS;
    FILE *input;

    while ( *++argv != NULL ) {
        input = fopen(*argv, "r");
        if (input == NULL) {
            perror(*argv);
            exit_status = EXIT_FAILURE;
            continue;
        }

        // deal the file

        if (fclose(input) != 0) {
            perror("fclose");
            exit( EXIT_FAILURE );
        }
    }

    return exit_status;
}
