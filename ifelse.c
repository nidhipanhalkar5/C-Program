#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

    if(num==0)
    {
        printf("%d is whole number !! \n",num);
    }
    else if(num>0)
    {
        printf("%d is whole number as well as natural number \n",num);
    }
    else
    {
        printf("%d is not whole number and natural number \n",num);
    }
    return 0;
}
