#include<stdio.h>
int main()
{
    int num,i,count;
    count=0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    printf("Count of divisors of %d is: %d\n", num, count);
    return 0;   
}