#include<stdio.h>
int main()
{
    int t=21,x,n,computer;
    while (t>=1)
    {
        printf("The number of matchsticks is 21\n");
        printf("Pick up (1-4):\n");
        scanf("%d",&x);
        if (x>4)
        {
            printf("Invalid entry\n");
            break;

        }
        computer = 5-x;
        printf("Computer picks up %d matchsticks/\n", computer);
        t=t-computer-x;
        if (t==1)
        {
            printf("You have lost via computer\n");
            break;
        }

    }
    return 0;
   


}