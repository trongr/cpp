#include <stdio.h>

int stringLength(char s[]) {
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

int main() {
    char *s = "This is a string of length 29";
    printf("String length: %d\n", stringLength(s));
    return 0;
}
