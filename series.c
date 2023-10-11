// #include<stdio.h>
// int main()
// {
//     int i=1,j,n;
//     float sum=0,fac;
//     printf("Enter a number:");
//     scanf("%d",&n);

//     for (i=1;i<=n;i++)
//     {
//         fac=1;
//         for(j=1;j<=i;j++)
//         {
//             fac=fac*j;
        
//         }
//         printf("%d\n",fac);
//         sum=sum+i/fac;
//     }
//     printf("%.2f",sum);
//     return 0;
    
// }

#include<stdio.h>
int main()
{
    int i=1,j=1,k=1;
    for(i=1;i<=3;i++)
    {
        for(k=1;k<=3;k++)
        {
            for(j=1;j<=3;j++)
            {
                printf("%d%d%d\n",i,k,j);
            }
        }
    }
    return 0;
}

