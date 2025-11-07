#include<stdio.h>
int main()
{
    int n,i,num,max;

    printf("How many values you are going to enter :");
    scanf("%d",&n);

    printf("Enter the number :");
    scanf("%d",&num);

    max=num;

    for(i=2;i<=n;i++)
    {
        printf("Enter the number :");
        scanf("%d",&num);

        if(num>max)
        {
            max=num;
        }
    }
    printf("Maximum number is :%d\n",max);
    return 0;
}