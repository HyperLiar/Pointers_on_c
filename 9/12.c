#include<stdio.h>
#include<stddef.h>
#include<ctype.h>
int prepare_key(char *key);
void encrypt( char *data, char const *key);
vodi decrypt( char *data, char const *key);

int prepare_key(char *key) {
    register size_t length = 0;
    char *temp = key;
    while ( *key++ != '\0' ) {
         *(key - 1) = toupper(* (key - 1));
    }

    key = temp;

    while ( *key != '\0') {
        for (; temp < key; temp++) {
            if (*temp == *key)
                break;
        }

        if (temp > key)
            
