#include <stdio.h>

/* lower:  convert c to lower case; ASCII only */
int lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main() {
    char s[] = "THIS IS IN CAPS";
    char t[] = "this is another string of a different size";
    char *u = "this is another string of a different size";
    printf("Size of s: %lu\n", sizeof(s)); // length of the string
    printf("Size of t: %lu\n", sizeof(t)); // length of the string
    printf("Size of u: %lu\n", sizeof(u)); // pointer has size 8
    return 0;
}
