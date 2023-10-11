// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter a number:");
//     scanf("%d", &n);

//     for(i=2;i<=n-1;i++)
//     {
//         if(n%i==0)
//         {
//             printf("Not a Prime Number\n");
//             break;
//         }

//     }
//     if(i==n)
//         printf("Prime Number\n");
//     return 0;
    
// }

// #include<stdio.h>
// int main()
// {
//     int i=1,j=1;
//     while(i++<=100)
//     {
//         while(j++<=200)
//         {
//             if(j==150)
//                 break;
//             else
//                 printf("%d%d\n",i,j);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the upper limit:");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        
        for(j=2;j<=i-1;j++)
        {
            if (i%j==0)
                break;
            
        }
        if(i==j)
        
            printf("%d\n",i);
        
    }
    return 0;
}