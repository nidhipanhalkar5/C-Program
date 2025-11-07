#include<stdio.h>
int main()
{
    int num,i,ans;

    printf("Enter a number to calculate factorial :");
    scanf("%d",&num);

    ans=1;

    for(i=1;i<=num;i++)
    {
        ans=ans*i;
    }
    printf("Factorial=%d\n",ans);
    return 0;
}