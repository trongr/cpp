#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    printf("Storage size for char: %lu\n", sizeof(char));
    printf("Storage size for short: %lu\n", sizeof(short));
    printf("Storage size for int: %lu\n", sizeof(int));
    printf("Storage size for long: %lu\n", sizeof(long));
    printf("Storage size for float: %lu\n", sizeof(float));
    printf("Storage size for double: %lu\n", sizeof(double));
    printf("Storage size for unsigned short: %lu\n", sizeof(unsigned short));
    printf("Storage size for unsigned int: %lu\n", sizeof(unsigned int));
    printf("Storage size for unsigned long: %lu\n", sizeof(unsigned long));

    printf("range of signed character is %i to %i\n", CHAR_MIN, CHAR_MAX);
    printf("Minimum float positive value: %E\n", FLT_MIN);
    printf("Maximum float positive value: %E\n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);

    return 0;
}
