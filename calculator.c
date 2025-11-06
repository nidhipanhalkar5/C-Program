#include<stdio.h>
int main()
{
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("Addition: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtraction: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Division: %.2f\n", result);
            }
            break;
        
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}