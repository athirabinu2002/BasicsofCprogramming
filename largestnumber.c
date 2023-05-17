#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    printf("Enter the 4 values:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
      {
          printf("greatest is:%d",a);
      }
    else if(b>a && b>c && b>d)
    {
          printf("greatest is:%d",b);
      }
     else if(c>a && c>b && c>d)
    {
          printf("greatest is:%d",c);
      }
    else
    {
        printf("greatest is:%d",d);
    }
    
}

