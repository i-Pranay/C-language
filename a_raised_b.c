// #include<stdio.h>
// int main()
// {
//     int bs,hra,da,gs;
//     printf("Enter your  basic salary:");
//     scanf("%d", &bs);
//     if (bs>=1500)
//     {
//         hra = 500;
//         da = 0.98*bs;
//     }
//     else
//     {
//         hra = 0.1*bs;
//         da = 0.9*bs;
//     }
//     gs = hra + da + bs;
//     printf("Empolyee's gross salary is %d", gs);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float cp,sp,profit,loss;
//     printf("Enter the cost price: \n");
//     scanf("%f", &cp);
//     printf("Enter the selling price:\n");
//     scanf("%f", &sp);
    
//     if ((sp-cp)>0)
//     {
//         profit = sp-cp;
//         printf("You have made profit of Rs%.2f\n", profit);

//     }
//     if ((cp-sp)>0)
//     {
//         loss = cp-sp;
//         printf("You have incurred loss of Rs%.2f\n",loss);
//     }
//     if (cp==sp)
//     {
//          printf("You have made no profit or loss\n");
//     }
//     return 0;     
// }

#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%100==0)
    {
        if (y%400==0)
            printf("Leap year\n");
        else
            printf("Not a leap year\n");
    }
    else
    {
        if (y%4==0)
            printf("Leap year\n");
        else
            printf("Not a leap year\n");

    }
    return 0;
}