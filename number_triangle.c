// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n,i,var;
//     printf("enter a number:");
//     scanf("%d", &n);
//     for (i=1;i<=10;i++)
//     {
//         var = pow(10,i);

//         if (n/var==0)
//         {
//             goto abc;
//         }
//     }
//     abc:
//     printf("%d",i);
//     return 0;
// }



#include<stdio.h>
#include<math.h>
int main()
{
    int b1,b2,i,var,sum=0,x,j,d1,d2,exp,rev=0;
    printf("b1");
    scanf("%d", &b1);
    printf("b2");
    scanf("%d", &b2);

    for (i=1;i<=10;i++)
    {
        var = pow(10,i);
        if (b1/var==0)
        {
            goto abc;
        }
    }
    abc:
    

    for (j=0;j<=(i-1);j++)
    {
       x=b1%10;
       sum =sum + pow(2,j)*x;
       b1 = b1/10;

    }
    printf("%d\n",sum);
    d1=sum;
    j=0;
    sum=0;
     for (j=0;j<=(i-1);j++)
    {
       x=b2%10;
       sum =sum + pow(2,j)*x;
       b2 = b2/10;

    }
    printf("%d\n",sum);
    d2=sum;
    j=0;
    sum=0;
    exp = d1+d2;
    printf("%d\n",exp);

   
    
        while(exp>0)
        {
             x=exp%2;
             rev = x*pow(10,j)+rev;
             x=0;
             exp=exp/2;
             j++;
        }
    printf("%d",rev);
    return 0;
}