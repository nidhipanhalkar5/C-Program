#include<stdio.h>
int main()
{
    int i,n;

    printf("How many times you want to print :");
    scanf("%d",&n);

    printf("Even Numbers ;");

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}