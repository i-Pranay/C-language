#include<stdio.h>
int main()
{
    int a,b,i,HCF,big, small;
    printf("enter 2 numbers:");
    scanf("%d%d", &a, &b);
    if (a<=0 || b<=0)
    {
        printf("enter valid inputs");
        goto abc;
    }
    
    if (a==b)
    {
        printf("HCF is: %d", a);
        goto abc;
    }
    if (a>b)
    {
        big = a;
        small = b;
    }
    else 
    {
        big = b;
        small = a;
    }
    for (i=1;i<=small;i++)
    {
        if (small%i==0 && big%i==0)
        {
            HCF = i; 
        }
    }
    printf("HFC is %d", HCF);
    abc:
    return 0;
}