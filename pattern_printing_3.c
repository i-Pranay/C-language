// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     // for(i=1;i<=n;i++)
//     // {
//     //     for(j=1;j<=n;j++)
//     //     {                             //my method
//     //         if(i+j<n+1)
//     //             printf(" ");
//     //         if(i+j>=n+1)
//     //             printf("*");
//     //     }
//     //     printf("\n");
//     // }


//     for(i=1;i<=n;i++)
//     {                                       //teachers method
//         for(j=1;j<=n-i;j++)
//         {
//             printf(" ");

//         }
//         for(k=1;k<=i;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number");
    scanf("%d", &n);

    for(i=1;i<=n-3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<n-2 || (i+j>n+5 && i+j<n+1)) 
                printf(" ");
            if(i+j>=n-2 && i+j<=n+1)
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

