// #include<stdio.h>
// int main(){
//     int n,i,j,k;
//     printf("Enter the number of lines:");
//     scanf("%d",&n);
//     int a=1;
//     for(int r=1;r<=2*n-1;r++){
//         printf("%d",a);
//         if(r>=n)
//         {
//             a--;
//         }
//         if(r<=n-1)
//         {
//             a++;
//         }
//     }
//     printf("\n");

//     for(i=1;i<=n-1;i++){
//         for(j=1;j<=n-i;j++){
//             printf("%d",j);
//         }
//         for(k=1;k<=n+1;){
//             printf(" ");
//             k=k+2*(i-1);
//         }
//         for(int r=n-i;r>=1;r--){
//             printf("%d",r);
//         }

//         printf("\n");
//     }
// }









#include<stdio.h>
int main() {
	int n = 0, i = 0, j = 0, k = 0;
	printf("Enter the number of lines: ");
	fflush(stdout);
	scanf("%d", &n);
	int a = 1;
	for (int r = 1; r <= 2 * n - 1; r++) {
		printf("%d", a);
		if (r >= n) {
			a--;
		}
		if (r <= n - 1) {
			a++;
		}
	}
	printf("\n");
	for (i = 1; i <= n - 1; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("%d", j);
		}
		for (k = 1; k <= ((2 * i) - 1); k++) {
			printf(" ");
		}
		for (int r = n - i; r >= 1; r--) {
			printf("%d", r);
		}
		printf("\n");
	}
}