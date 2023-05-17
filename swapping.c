/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,temp;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    
    printf("a=%d ,b=%d",a,b);
}
*/
/*<------------------------------------------------------------------------------->
                              or
<------------------------------------------------------------------------------->*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10,b=20,temp;
     
     temp=a;
     a=b;
     b=temp;
     
     printf("a=%d ,b=%d",a,b);
}

