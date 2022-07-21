//Write a program to check whether two given numbers are co-prime numbers or not.
#include<stdio.h>

int main()
{
    int a,b;
    printf(" enter two number ");
    scanf("%d%d",&a,&b);
    int i,h;
    h=a<b?a:b;
    for(i=h;i>1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf(" number is not co-prime ");
            break;
        }

    }
    if(i==1)
        printf("numbers are co-prime ");
    return 0;

}
