// // C Program to Display Armstrong
// // numbers between 1 to 1000
// #include <math.h>
// #include <stdio.h>

// int main()
// {
// 	int i, sum, num, count = 0;
// 	printf(
// 		"All Armstrong number between 1 and 1000 are:\n");

// 	// This loop will run for 1 to 1000
// 	for (i = 1; i <= 1000; i++) {
// 		num = i;
// 		// Count number of digits.
// 		while (num != 0) {
// 			num /= 10;
// 			count++;
// 		}
// 		num = i;
// 		sum = pow(num % 10, count)
// 			+ pow((num % 100 - num % 10) / 10, count)
// 			+ pow((num % 1000 - num % 100) / 100, count);
// 		// Check for Armstrong Number
// 		if (sum == i) {
// 			printf("%d\n", i);
// 		}
// 		count = 0;
// 	}
// }

#include<stdio.h>
#include<math.h>
int main()
{
	int num, ld,digits,sum,i,end;
	printf("Enter the upper limit:");
	scanf("%d", &end);
	printf("Armstrong numbers from 1 to %d are:\n", end);

	for(i=1;i<=end;i++)
	{
		sum = 0;
		num = i;
		digits = (int) log10(num) + 1;
		while(num>0)
		{
			ld = num%10;
			sum = sum + (pow(ld, digits));
			num = num/10;

		}
		if (sum==i)
		{
			printf("%d\n", i);

		}
	}
	return 0;
}
