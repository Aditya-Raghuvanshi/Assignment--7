//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>

int main()
{
    int x,y,z,n;
    x=0;y=1;
    z=x+y;
    printf("enter the nth term  you want \n");
    scanf("%d",&n);
    if(n==1)
        printf("0");
    else if(n==2)
        printf("1");
    for(int i=1;i<=n-2;i++)
    {
        z=x+y;
        if(i==n-2)
            {printf("%d ",z);
             break;
            }
        x=y;
        y=z;
    }
    return 0;
}
