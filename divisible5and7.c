#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num % 5 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by both 5 and 7\n", num);
    }
    else if(num % 5 == 0)
    {
        printf("%d is divisible by 5 only\n", num);
    }
    else if(num % 7 == 0)
    {
        printf("%d is divisible by 7 only\n", num);
    }
    else
    {
        printf("%d is not divisible by either 5 or 7\n", num);
    }
}