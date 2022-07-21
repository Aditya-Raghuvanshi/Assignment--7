//Write a program to find next Prime number of a given number
#include<stdio.h>

int main()
{
    int i,j,n;  //we have to find prime no. after n.
    printf("enter a numbers ");
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }

        }
        if(j==i)
         {
             printf("%d ",i);
             break;
         }
    }
    return 0;
}
