#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", 2*i - 1);
        sum = sum + (2*i - 1);
    }

    printf("\nThe Sum of odd natural numbers up to %d terms = %d\n", n, sum);

    return 0;
}
