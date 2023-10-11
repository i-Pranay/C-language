// #include<stdio.h>
// int main()
// {
//    long b1, b2;
//    int i=0, rem=0,sum[20];
//    printf("First binary number:");
//    scanf("%ld",&b1);
//    printf("Second binary number:");
//    scanf("%ld", &b2);
//    while (b1!=0 || b2!=0)
//    {
//       sum[i++] = (b1%10+b2%10+rem)%2;
//       rem = (b1%10+b2%10+rem)/2;
//       b1/=10;
//       b2/=10;

//    }
//    if (rem!=0)
//       sum[i++]= rem;
//       --i;
//    printf("Sum of 2 binary numbers: ");
//    while (i >= 0)
//       printf("%d", sum[i--]);

   
//  return 0;
// }
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i,j,d,sum=0,var,temp;
    
    printf("Enter your number: ");
    scanf("%d", &n);
    temp=n;
    for (i=1;i<=5;i++)
    {
        var = pow(10,i);

        if (n/var==0)
        {
            goto abc;
        }
        else continue;
        
    }
    abc:
    printf("%d\n", i);
    for(j=1;j<=i;j++)
    {
        d=n%10;
        sum = sum + pow(d,i);
        n=n/10;
    }
    if (sum==temp)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
    return 0;

}