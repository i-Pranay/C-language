// #include<stdio.h>
// int main()
// {
//     int n,i,c;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
    

//     for (i=1;i<=n;i++)
//     {
//         if (n%i==0)
//         {
//             c++;
//         }
//     }

//     if(c==2)
//     {
//         printf("n is a prime number");

//     }
//     else{
//         printf("not a prime number");
//     }
//     return 0;

// }



#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,r,var,sum=0,d,temp;
    printf("Enter how many armstrong numbers you want:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
    	temp=i;
        for (j=1;j<=5;j++)
        {
            var = pow(10,j);
            if (i/var==0)
            {
                goto abc;
            }
        }
        abc:
                for (r=1;r<=j;r++)
                {
                    if(temp==0)
                    {
                        goto bcd;
					}
					else 
					{
						d=temp%10;
                        sum = sum + pow(d,j);
                        temp = temp/10;
					}
                }
        bcd:
        if (sum==i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}