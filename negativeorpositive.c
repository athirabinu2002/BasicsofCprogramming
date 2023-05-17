#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numb;
    printf("Enter the number:");
    scanf("%d",&numb);
    if(numb<0)
      {
          printf("Entered number is negative");
      }
    else
    {
        printf("Entered number is positive");
    }
}

