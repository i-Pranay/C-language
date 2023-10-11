// #include<stdio.h>
// int main(){
//     int n,i,j,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);
//     int nst=n-1;
//     int nsp=1;
//     for(int z=1;z<=2*n-1;z++){
//         int d=z+64;
//         char ch = (char)d;
//         printf("%c",ch);
//         d++;
//     }
//     printf("\n");

//     for(i=1;i<=n-1;i++){
//         int a=1;
//         int d=a+64;
//         char ch =(char)d;
//         for(j=1;j<=nst;j++){
//             printf("%c",d);
//             a++;
//             d++;
//         }
//         for(k=1;k<=nsp;k++){
//             printf(" ");
//             a++;
//             d++;
//         }
//         for(int r=1;r<=nst;r++){
//             printf("%c",d);
//             a++;
//             d++;
//         }
//         printf("\n");
//         nsp+=2;
//         nst--;
//     }
// }




#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    int a=1;
    for(int r=1;r<=2*n-1;r++){
        printf("%d",a);
        if(r>=n)
        {
            a--;
        }
        if(r<=n-1)
        {
            a++;
        }
    }
    printf("\n");

    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        for(k=1;k<=2*(n-1)-1;){
            printf(" ");
            k=k+2;
        }
        for(int r=n-i;r>=1;r--){
            printf("%d",r);
        }

        printf("\n");
    }
}