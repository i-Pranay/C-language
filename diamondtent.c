#include<stdio.h>
int main(){
    int n,i,j,k,r,z;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for(z=1;z<=2*(n)+1;z++){
        printf("*");
    }
    printf("\n");

    for(i=1;i<=n;i++){
        for(j=n+1-i;j>=1;j--){
            printf("*");
        }
        for(k=1;k<=2*(i-1)+1;k++){
            printf(" ");
        }
        for(r=n+1-i;r>=1;r--){
            printf("*");
        }
        printf("\n");
    }
}