// #include<stdio.h>
// void odd();
// void even();
// int n = 1;

// void odd()
// {
//     if (n<=10)
//     {
//         printf("%d\n", n+1);
//         n++;
//         even();
//     }
//     return;
// }

// void even()
// {
//     if (n<=10)
//     {
//         printf("%d\n", n-1);
//         n++;
//         odd();
//     }
//     return ;
// }
// int main()
// {
//     odd();
// }

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;)
    {
        if(i%2!=0)
        {
            printf("%d\n", i+1);
            i++;
        }
        if(i%2==0)
        {
            printf("%d\n", i-1);
            i++;
        }
    }
    return 0;
}
