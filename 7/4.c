#include<stdio.h>
#include<stdarg.h>
int max_list(int n_values, ...) {
    va_list var_arg;
    int count;
    int max = 0;
    
    va_start( var_arg, n_values);
    for (count = 0; count< n_values; count += 1) {
        int now = va_arg( var_arg, int);
        if (now < 0)
            break;

        if (now > max)
            max = now;
    }

    va_end(var_arg);
    return max;
}
