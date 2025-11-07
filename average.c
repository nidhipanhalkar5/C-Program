#include <stdio.h>

int main() {
    int i;
    float num, sum = 0.0, average;

    printf("Enter 10 numbers:\n");

    for(i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }

    average = sum / 10;

    printf("\nSum of 10 numbers = %.2f", sum);
    printf("\nAverage of 10 numbers = %.2f\n", average);

    return 0;
}
