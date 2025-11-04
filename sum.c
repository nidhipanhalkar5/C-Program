#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Make number positive if it's negative
    if (num < 0) num = -num;

    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to sum
        num /= 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
