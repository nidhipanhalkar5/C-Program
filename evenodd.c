#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:
            printf("The number %d is Even",num);
            break;

        case 1:
            printf("The number %d is Odd",num);
            break;

        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}

