//Write a program to calculate HCF of two numbers
#include<stdio.h>

int main()
{
    int a,b,i;  // a and b are the two numbers of which you want the HCF.
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    int l;
    l=a<b?a:b;
    for(i=l;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf(" HCF is %d ",i);
            break;
        }
    }
    return 0;
}
