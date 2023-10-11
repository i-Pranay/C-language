// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-(i-1);j++)
//             printf("%d",j);
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

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=2*(i-1)+1;j=j+2)
//             printf("%d",j);
//         printf("\n");
//     }   
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d", &n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=(2*(n-1)+1)-2*(i-1);j=j+2)
//             printf("%d",j);
//         printf("\n");
//     }   
// }





//ascii value of A is 65


// #include<stdio.h>
// int main()
// {
//     int i,j,n,a,d;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             d=j+64;
//             char ch= (char)d;
//             printf("%c",ch);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,j,d,t,a;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             if(i%2!=0)
//             {
//                 printf("%d",j);
//             }
//         }
//         if(i%2==0)
//         {
//             for(a=1;a<=i;a++)
//             {
//                 d=64+a;
//                 char ch=(char)d;
//                 printf("%c",ch);
                    
//             }    
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of lines:");
    scanf("%d",&n);

    for(i=i;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}





















































//   int n,i,j;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//             printf("%d",j);
//         printf("\n");
//     }