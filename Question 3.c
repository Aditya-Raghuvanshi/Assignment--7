//Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>

int main()
{
    int x,y,z,n,i;
    x=0;y=1;
    printf("Enter the no. which you want search in this series ");
    scanf("%d",&n);

    for( i=1;i<=n+1;i++)
    {
        z=x+y;
        if(n==0)
         {
             printf(" found ");
             break;
         }
        else if(n==1)
         {
           printf(" found ");
           break;
         }
        else
        {
            if(n==z)
            {
                 printf(" found ");
                 break;
            }
            x=y;
            y=z;
        }
    }
    if(i==n+2)
       printf("Not found ");
    return 0;
}
