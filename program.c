#include<stdio.h>
#include<math.h>
int main()
{
    int n, i,j,d,sum=0,var;
    printf("Enter your number ");
    scanf("%d", &n);
    for (i=1;i<=n+1;i++)
    {
        var = pow(10,i);

        if (n%var==0)
        {
            goto abc;
        }
        else continue;
        
    }
    abc:
    for(j=1;j=i;j++)
    {
        d=n%10;
        sum= sum + pow(d,i);
        n=n/10;

    }
    if (sum==n)
    {
        printf("it is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
    return 0;

}