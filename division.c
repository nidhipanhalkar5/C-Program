#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Division = %.2f\n", result);
    }
    return 0;
}

