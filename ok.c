#include<stdio.h>
int main()
{
    int rs=0, one=0, two=0, five=0, ten=0, fifty=0, hundred=0;

    //input total number of rupees from user
    printf("Enter the sum of rupees: ");
    scanf("%d", &rs);

    //main functionality
    if(rs>=100)
    {
        hundred = rs/100;
        rs = rs%100;
    }

    if(rs>=50)
    {
        fifty = rs/50;
        rs = rs%50;
    }

    if(rs>=10)
    {
        ten = rs/10;
        rs = rs%10;
    }
    if(rs>=5)
    {
        five = rs/5;
        rs = rs%5;
    }
    if(rs>=2)
    {
        two = rs/2;
        rs = rs%2;
    }
    if(rs>=1)
    {
        one = rs;
    }

    //display note's quantity

    printf(" Rs 100 = %d\n Rs 50 = %d\n Rs 10 = %d\n Rs 5 = %d\n Rs 2 = %d\n Rs 1 = %d", hundred, fifty, ten, five, two, one);
    return 0;
}