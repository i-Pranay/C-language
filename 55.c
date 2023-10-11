#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // if (n%5==0 && n%11==0)
    // {
    //     printf("Entered the number is divisible by 55");
    // }
    // else
    // {
    //     printf("Entered the number is not divisible by 55");
    // }
    // int n,m,sum=0;
    // printf("Enter a number with atleast 2 digits:");
    // scanf("%d", &n);
    // while (n>0)
    // {
    //     m=n%10;
    //     sum = sum + m;
    //     n=n/10;
    // }
    // printf("Sum of the digits is: %d",sum);

    // return 0;
    int num,rev=0,rem,temp;
    printf("Enter an integer:");
    scanf("%d", &num);

    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num = num/10;
    }

    if (rev==temp)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
    
    return 0;

}


