#include<stdio.h>
void set_bit( char bit_array[], unsigned bit_number );
void clear_bit( char bit_array[], unsigned bit_number );
void assign_bit( char bit_array[], unsigned bit_number, int value);
int test_bit( char bit_array[], unsigned bit_number );

void set_bit( char bit_array[], unsigned bit_number ) {
    bit_array[bit_number - 1] |= 1;
}

void clear_bit( char bit_array[], unsigned bit_number ) {
    bit_array[bit_number - 1] &= 0;
}

void assign_bit( char bit_array[], unsigned bit_number, int value) {
    bit_array[bit_number - 1] = value;
}

int test_bit( char bit_array[], unsigned bit_number ) {
    return !bit_array[bit_number - 1];
}
