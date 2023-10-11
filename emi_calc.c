#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float emi;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest per month in years:");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);
    r=r/(12*100);
    t=t*12;
    printf("The time in months is : %,2f", t);
    
    emi = ((p*r*pow(1+r,t))/(pow(1+r,t)-1));
    

    printf("The EMI is: %.2f", emi);
    return 0;


}