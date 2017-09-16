#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Convert string of hex digits into decimal integer. s can start with an
// optional 0x or 0X, and have digits 0-9, a-f or A-F. NOTE. Smaller digits are
// to the right of the string.
int htoi(const char s[]) {
    int i, total, offset;
    size_t l;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        offset = 2;
    } else {
        offset = 0;
    }

    // Doesn't include the terminating null char
    l = strlen(s);
    printf("String length is %zd\n", l);

    for (i = l - 1; i - offset >= 0; i--) {
        int c = s[i];
        int digit, j = l - i - 1;
        if ('0' <= c && c <= '9') {
            digit = c - '0';
        } else if ('a' <= c && c <= 'f') {
            digit = c - 'a' + 10;
        } else if ('A' <= c && c <= 'F') {
            digit = c - 'A' + 10;
        } else {
            printf("Unexpected char in string: %c\n", c);
            exit(1);
        }
        total = total + pow(16, j) * digit;
        printf("i-th: %d, digit: %d, total: %d\n", j, digit, total);
    }

    return total;
}

int main() {
    char s[] = "0X00123A";
    char t[] = "0x00012df";
    printf("String as integer %s, %d\n", s, htoi(s));
    printf("String as integer %s, %d\n", t, htoi(t));
    return 0;
}