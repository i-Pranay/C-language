// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=i;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(i==3 || j==3) printf("*");
//             else printf(" ");

//         }
//         printf("\n");
//     }
//     return 0;

// }



// a 6 cross 4 hollow rectangle for n=6
// #include<stdio.h>
// int main()
// {
//     int n,i,j;

//     printf("Enter the number of columns: ");
//     scanf("%d",&n);

//     for(i=1;i<=n-2;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(i==1 || i==n-2)
//                 printf("*");
//             if(i>1 && i<n-2)

//                 if(j==1 || j==n)
//                     printf("*");
//                 else
//                     printf(" ");
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(i==j || (i+j==n+1 && i!=3 && j!=3))
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d", &n);
//     int a=1;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d", &n);
//     int a=1;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d", &n);
//     int a=1;
//     for(i=1;i<=n;i++)
//     {
//         if(i%2!=0) a=1; // if i is odd a=1 and if i is even then a=0
//         else a=0;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",a);
//             if(a==0) a=1;
//             else a=0;
//             // if(i%2!=0 && j%2!=0)
//             //       printf("%d",a);
//             // if(i%2!=0 && j%2==0)
//             //     printf("%d",a-1);      
//             // if(i%2==0 && j%2!=0)
//             //     printf("%d",a-1);
//             // if(i%2==0 && j%2==0)
//             //     printf("%d",a);
                
                
//         }
//         printf("\n");
//     }
//     return 0;
// }