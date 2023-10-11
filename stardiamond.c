

#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of lines in the star diamond: ");
    scanf("%d",&n);
    int nsp = n/2;
    int nst = 1;
    int ml=n/2+1;


    for(i=1;i<=n;i++) //i denotes number of lines
    {

        for(j=1;j<=nsp;j++) //spaces
        {
            printf(" ");
        }
        for(k=1;k<=nst;k++)   //stars
        {
            printf("*");

        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }


        printf("\n");
    }
}