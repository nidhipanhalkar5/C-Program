#include<stdio.h>
int main()
{
    int i,n;

    printf("How many times you want to print :");
    scanf("%d",&n);

    printf("Odd Numbers ;");

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }
}