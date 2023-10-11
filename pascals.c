#include<stdio.h>
int main()
{
	int a, n, i, j;
	printf("Enter the value of n ");
	scanf("%d", &n);
	a = 2*n-1;
	long int m[n][a];
	m[0][n-1]=1;
	m[n-1][0]=1;
	m[n-1][a-1]=1;
	for (i=1;i<=a;i++)
	{
		if(i!=n)
		{
			m[0][i-1]=0;
		}
	}
	for (i=1;i<=n;i++)
	{
		m[i-1][0]=0;
		m[i-1][a-1]=0;
	}
	for (i=1;i<n;i++)
	{
		for (j=1;j<(a-1);j++)
		{
			m[i][j]=m[i-1][j-1] + m[i-1][j+1];
		}
	}
	m[0][n-1]=1;
	m[n-1][0]=1;
	m[n-1][a-1]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<a;j++)
		{
			if (m[i][j]!=0)
			{
				printf("%ld    ", m[i][j]);
			}
			else
			printf("     ");
		}
		printf("\n\n\n");
	}
	return 0;
}