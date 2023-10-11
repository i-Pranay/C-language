#include<stdio.h>
int main()
{
    int n, reverse = 0, rem,temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp=n;
    while (n!=0)
    {
        rem = n%10;
        reverse = reverse*10+rem;
        n = n/10;

    }
    printf("Reversed number: %d\n", reverse);
    if (reverse==temp)
    {
        printf("is a palindrome.");
    }
    else
    {
        printf("not a palindrome.");
    }
    return 0;
}
