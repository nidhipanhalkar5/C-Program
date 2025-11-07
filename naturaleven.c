#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
