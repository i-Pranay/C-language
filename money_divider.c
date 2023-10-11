#include<stdio.h>
int main()
{
    int n,hun=0,fif=0,ten=0,five=0,two=0,one=0;
    printf("Enter the amount of money:");
    scanf("%d",&n);

    if(n>=100)
    {
        hun=n/100;
        n=n%100;

    }
    if(n>=50)
    {
        fif=n/50;
        n=n%50;
    }
    if(n>=10)
    {
        ten=n/10;
        n=n%10;
    }
    if(n>=5)
    {
        five=n/5;
        n=n%5;
    }
    if(n>=2)
    {
        two=n/2;
        n=n%2;
    }
    if(n>0)
    {
        one=n;
    }
 
    printf("%d hunrdred\n%d fifty\n%d ten\n%d five\n%d two\n%d one\n", hun, fif, ten, five , two , one);
    
    return 0;    
}
