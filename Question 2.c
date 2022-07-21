//Write a program to print first N terms of Fibonacci series
#include<stdio.h>

int main()
{
    int x,y,z,n;
    x=0;y=1;
    printf("Enter the no. upto which you want this series ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        z=x+y;
        if(i==1)
            printf("%d ",x);
        else if(i==2)
            printf(" %d ",y);
        else
        {
             printf(" %d ",z);
             x=y;
             y=z;
        }
    }
    return 0;
}
