#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,r,var,sum=0,d,temp;
    printf("Enter till how many numbers u want the armstrong number:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=10;j++)
        {
            var = pow(10,j);
            if (i/var==0)
            {
                temp=i;
                for (r=1;r<=j;r++)
                {
                    d=n%10;
                    sum = sum + pow(d,j);
                    temp = temp/10;
                    if (sum==i)
                    {
                        printf("%d\n",i);
                    }
                }
            }
            
        }    
    }
    return 0; 
}




#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,j,r,var,sum=0,d,temp;
    printf("Enter till how many numbers u want the armstrong number:");
    scanf("%ld", &n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=10;j++)
        {
            var = pow(10,j);
            if (i/var==0)
            {
                temp=i;
                for (r=1;r<=j;r++)
                {
                    d=n%10;
                    sum = sum + pow(d,j);
                    temp = temp/10;
                    if (sum==i)
                    {
                        printf("%ld\n",i);
                    }
                }
            }
            
        }    
    }
    return 0; 
}