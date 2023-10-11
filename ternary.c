// #include<stdio.h>
// int main()
// {
//     int m = 2, n = 4;
//     (m>n) ? printf("m is greater than n that is %d is greater than %d", m,n)
//           : printf("n is greater than m that is %d is greater than %d", n,m);

// return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     (age>18) ? printf("You can vote")
//              : printf("You cannot vote");
//     return 0;
// }

#include<stdio.h>
int main()
{
    int d,y,m,w;
    printf("Enter the number of days: ");
    scanf("%d", &d);
    y = d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    w=d/7;
    d=d%7;
    printf("%d Years, %d Months, %d Weeks, %d Days", y,m,w,d);
    return 0;
}