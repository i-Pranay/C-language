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