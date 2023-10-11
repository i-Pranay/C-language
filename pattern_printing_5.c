// #include<stdio.h>
// int main()
// {
//     int n,i,j,a,d;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         int a=1;
//         for(j=1;j<=n;j++)
//         {
//             if(i+j<n+1)
//                 printf(" ");
//             if(i+j>=n+1)
//             {
//                 d=a+64;
//                 char ch;
//                 ch=(char)d;
//                 printf("%c",d);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=2*(i-1)+1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         int a=1,d;
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=2*(i-1)+1;j++)
//         {
//             d=a+64;
//             char ch= (char)d;
//             printf("%c",ch);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int n,i,j,r,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }

//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         for(r=1;r<=i-1;r++)
//             {
//                 printf("%d",r);
//             }
//         printf("\n");

//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int n,i,j,k,nst=1;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

    
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        nst++;
        printf("\n");
    }
}