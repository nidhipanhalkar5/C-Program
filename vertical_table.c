#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nMultiplication Tables from 1 to %d\n\n", n);

    for(i = 1; i <= n; i++) {
        printf("Table of %d:\n", i);
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Blank line between tables
    }

    return 0;
}
