//Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>

int main()
{
    int i,n,r=0,s;
    printf("enter a numbers ");
    scanf("%d",&n);
    for(i=n;i!=0;)
    {
        s=i%10;
        r=r+s*s*s;
        i=i/10;
    }
    if(r==n)
        printf(" it is an Armstrong number ");
    else
        printf(" it is not an Armstrong number ");
    return 0;
}
