// #include<stdio.h>
// int main()
// {
//     int n,i,j,d,k,r,dr,dk;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
        
//         int a=1,b=-2;
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             d=a+64;
//             char ch = (char)d;
//             printf("%c", ch);
//             a++;  
//         }
//         for(r=1;r<=i-1;r++)
//         {
//             dr=64+i+1+b;
//             char dk = (char)dr;
//             printf("%c" , dk);
//             b--;
//         }
        
//         printf("\n");
//     }
//     return 0;
// }





// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     printf("Enter the number of lines in the star diamond: ");
//     scanf("%d",&n);
//     int nsp = n/2;
//     int nst = 1;
//     int ml=n/2+1;


//     for(i=1;i<=n;i++) //i denotes number of lines
//     {

//         for(j=1;j<=nsp;j++) //spaces
//         {
//             printf(" ");
//         }
//         for(k=1;k<=nst;k++)   //stars
//         {
//             printf("*");

//         }
//         if(i<ml)
//         {
//             nsp--;
//             nst+=2;
//         }
//         else
//         {
//             nsp++;
//             nst-=2;
//         }


//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n,i,j,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);
//     int nst=n;

//     for(i=n;i>=1;i--)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }

//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }
// }


// #include<stdio.h>
// int main(){
//     int i,j,k,n;

//     printf("Enter the number of lines:");
//     scanf("%d", &n);

//     for(i=n;i>=1;i--){
//         for(k=1;k<=n-i;k++){
//             printf(" ");
//         }
//         for(j=2*(i-1)+1;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of lines:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n-i;j>=0;j--){
            printf(" ");
        }
        for(k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
}



