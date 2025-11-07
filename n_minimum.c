#include<stdio.h>
int main()
{
    int n,i,num,min;

    printf("How many values you are going to enter :");
    scanf("%d",&n);

    printf("Enter the number :");
    scanf("%d",&num);

    min=num;

    for(i=2;i<=n;i++)
    {
        printf("Enter the number :");
        scanf("%d",&num);

        if(num<min)
        {
            min=num;
        }
    }
    printf("Minimum number is :%d\n",min);
    return 0;
}