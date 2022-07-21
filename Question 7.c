//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>

int main()
{
    int i,j,m,n;  //prime no. are between  m and n.
    printf("enter two numbers ");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }

        }
        if(j==i)
            printf("%d ",i);
    }
    return 0;
}
