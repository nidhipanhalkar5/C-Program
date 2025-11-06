#include<stdio.h>
int main()
{
    char ch;

    printf("Enter Rainbow color :");
    scanf("%c",&ch);

    if(ch=='V' || ch=='v')
    {
        printf("It is Rainbow color VIOLET");
    
    }
    else if(ch=='I' || ch=='i')
    {
        printf("It is Rainbow color INDIGO");
    
    }
    else if(ch=='B' || ch=='b')
    {
        printf("It is Rainbow color BLUE");
    
    }
    else if(ch=='G' || ch=='g')
    {
        printf("It is Rainbow color GREEN");
    
    }
    else if(ch=='Y' || ch=='y')
    {
        printf("It is Rainbow color YELLOW");
    
    }
    else if(ch=='O' || ch=='o')
    {
        printf("It is Rainbow color ORANGE");
    
    }
    else if(ch=='R' || ch=='r')
    {
        printf("It is Rainbow color RED");
    
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}