#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    printf("1.porota 2.mandhi 3.chicken fry 4.fries \n Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    {
        case 1:
        printf("wants porotta");
    
    break;
    }
    {
        case 2:
        printf("wants mandhi");
    
     break;
    }
    {
        case 3:
        printf("wants chicken");
    
    break;
    }
    {
        case 4:
        printf("wants fries");
    
    break;
    }
    default:
    printf("your are a fool!");
    }
    
}
