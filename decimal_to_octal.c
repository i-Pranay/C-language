#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum=0,i,j,var;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i=1;i<=10;i++)
    {
        var = pow(10,i);
        if (n/var==0)
        {
            goto abc;
        }
    }
    abc:
    printf("The number of digits in the given integer is: %d\n", i);
    j=0;
    while(n>0)
    {
        rem=n%8;
        sum = rem*pow(10,j)+sum;
        n=n/8;
        j++;
    }
    printf("The octal equivalent of the entered number is %d\n", sum);
    return 0;

}