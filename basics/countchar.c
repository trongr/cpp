#include <stdio.h>
/* count characters in input; 1st version */
int main() {
    double count;
    for (count = 0; getchar() != EOF; ++count)
        ;
    printf("%.0f\n", count);
}
