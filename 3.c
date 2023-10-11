// #include<stdio.h>
// int main()
// {
//     float basic_salary, dallowance, house_rent, gross_salary;
//     printf("Enter Basic Salary: ");
//     scanf("%f",&basic_salary);

//     dallowance = 0.4 * basic_salary;
//     house_rent = 0.2 * basic_salary;

//     gross_salary = basic_salary + dallowance + house_rent;

//     printf("\n Basic Salary: %.2f",  basic_salary);
//     printf("\n Dearness Allowance: %.2f", dallowance);
//     printf("\n House Rent: %.2f", house_rent);
//     printf("\n Gross Salary: %.2f", gross_salary);

    
//     return (0);
// }

// #include<stdio.h>
// int main()
// {
//     int hindi, math, english, science, art, total;
//     float percentage;
//     printf("Enter the marks of Hindi: ");
//     scanf("%d", &hindi);

//     printf("Enter the marks of Math: ");
//     scanf("%d", &math);

//     printf("Enter the marks of English: ");
//     scanf("%d", &english);

//     printf("Enter the marks of Science: ");
//     scanf("%d", &science);

//     printf("Enter the marks of Art: ");
//     scanf("%d", &art);

//     total = hindi+math+english+science+art;

//     percentage = total/5;

//     printf("\nAggregate marks: %d", total);
//     printf("\nPercentage marks: %0.2f %%", percentage);
//     return 0;
// }



#include<stdio.h>
// #include<conio.h>
// int main()
// {
//     float f, c;
//     printf("Enter Temperature in Fahrenheit: ");
//     scanf("%f", &f);

//     c = (f-32)*5/9;

//     printf("The Temperature in Centigrade Degree: %.2f", c);
//     return 0;
// }




#include<stdio.h>
#include<conio.h>
int main()
{
    float l, b, r,ca, cc, ra, rp;

    //For rectangle
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    //For circle
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    //Calculate area & perimeter of the rectangle...
     ra = l * b;    //Area of Rectangle = Length x Breadth
     rp = 2 * (l + b);    //Perimeter of Rectangle = 2 x (Length + Breadth) or addition of all sides

     //Calculate are & circumference of the circle...
     ca = 3.14 * r * r;   //Area of Circle = 2 x Pi x r^2 where Pi = 3.14
     cc = 2 * 3.14 * r;  //Circumference of Circle = 2 x Pi x r

     printf("\nThe area of the rectangle: %0.2f", ra);
     printf("\nThe perimeter of the rectangle: %.2f", rp);
     printf("\n\nThe area of the circle: %.2f", ca);
     printf("\nThe circumference of the circle: %.2f", cc);

     return (0);
}


