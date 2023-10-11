#include<stdio.h>
#include<math.h>
int main(){
    float t, v, wcf;
    printf("This program is meant to calculate te wind chill factor,\nit is always lower than the air temperature");
    printf("\nPlease enter the temperature: ");
    scanf("%f", &t);
    printf("Please enter the wind velocity: ");
    scanf("%f", &v);

    wcf = (35.74 + 0.6215*t + (0.4275*t-35.75)*pow(v, 0.16));
    printf("The wind chill factor is: %.2f\n", wcf);
    return 0;
}