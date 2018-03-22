#include<string.h>
#include<ctype.h>
#include<stddef.h>

size_t my_strnlen( char const *string, int size ) {
    register size_t length;

    for ( length = 0; length < size; length += 1) {
        if ( *string == '\0') {
            break;
        }
    }

    return length;
}

char* my_strcpy( char *dst, char const *src, int size) {
    char *rst = dst;
    for ( ; size > 0; size--) {
        *dst++ = *src++;
    }

    *dst = '\0';
    return rst;
}

char* my_strcat( char *dst, char const *src, int size) {
    char *rst = dst;
    while ( *dst != '\0' ) {
        dst++;
    }

    while (size--) {
        *dst++ = *src++;
    }
    *dst = '\0';
    return rst;
}

char* my_strcpy_end( char *dst, char const *src) {
    while( ( *dst++ = *src++) != '\0') 
        ;

    return dst - 1;
}

char *my_strnchr( char const *str, int ch, int which ) {
    size_t length = 0;
    while (length < which) {
       if (*str++ == ch)
           length++;
    }

    return str - 1;
}

int count_chars( char const *str, char const *chars) {
    return (int) strspn( str, chars);
}

int palindrome( char *string ) {
    register size_t length = 0;
    char *str = string;
    while (*str++ != '\0') {
        length++;
    }

    str = str - 1;

    while (string != str) {
        if (isspace(*string) || ispunct(*string)) {
            string++;
            continue;
        }

        if (isspace(*str) || ispunct(*str)) {
            str++;
            continue;
        }

        if (tolower(*string) != tolower(*str)) {
            return 0;
        }
    }

    return 1;
}
