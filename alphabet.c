#include<stdio.h>
int main()
{
    char ch,sch;
 
    printf("Enter the capital letter ;");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
     sch=ch+32;
     printf("Capital Alphabet : %c Small Alphabet : %c \n",ch,sch);
    }
    else
    {
        printf("You have not entered a capital letter \n");
    }
        return 0;
  }

