#include <stdio.h>

/* atoi:  convert s (string representation of an integer) to integer */
int atoi(char s[]) {
    int i, n, digit;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        digit = (s[i] - '0');
        n = 10 * n + digit;
    }
    return n;
}

int main() {
    char s[] = "12341234";
    printf("String as integer %s, %d\n", s, atoi(s));
    return 0;
}