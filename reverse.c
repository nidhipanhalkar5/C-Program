#include<stdio.h>
int main()
{
    int i,n;

    printf("How many times you want to print :");
    scanf("%d",&n);

    printf("Natural numbers in reverse order :");

    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}