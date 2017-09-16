#include <stdio.h>

int power(int m, int n);
int powerV2(int base, int n);

int main() {
    int i;
    for (i = 0; i < 20; ++i) {
        printf("%d %d %d\n", i, power(2, i), powerV2(-3, i));
    }
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}

/* power:  raise base to n-th power; n >= 0; version 2 */
int powerV2(int base, int n) {
    int p;
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}