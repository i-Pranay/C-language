#include<stdio.h>
int main()
{
    int n,i,count_pos=0,count_neg=0,count,count_zeros=0;
    printf("Enter the aount of numbers you want to count:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&count);
        if (count>0)
        {
           count_pos =+1;
            
        }
        if (count<0)
        {
            count_neg =+1;

        }
        if (count==0)
        {
            count_zeros =+1;
        }

    }
    printf("The number of postive integers were: %d\n",count_pos);
    printf("The number of negative integers were: %d\n",count_neg);
    printf("The number of zeros were: %d\n",count_zeros);
    return 0;
}