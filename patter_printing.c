#include<stdio.h>
int main()
{
    int i,j,m;
    printf("enter the no of lines:");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        for (j=m;j>=i;j--)
            printf("*");
       
        printf("\n"); 
    }
    return 0;
}