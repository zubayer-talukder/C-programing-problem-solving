//Write a C program to print the roots of Bhaskara’s formula of Quadratic Equation from the given three floating numbers.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,Temp;
    double x,y;

    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c): \n");
    printf("Give Me 'a' Input:");
    scanf("%f",&a);
    printf("Give Me 'b' Input:");
    scanf("%f",&b);
    printf("Give Me 'c' Input:");
    scanf("%f",&c);

    Temp=((b*b)-4*(a*c));
    if(Temp>=0 && a!=0)
    {
        Temp=sqrt((b*b)-4*(a*c));
        x=(-b+Temp)/2*a;
        y=(-b-Temp)/2*a;
        printf("Your result is: %.4lf and %.4lf",x,y);

    }
    else
        {

           x=sqrt((fabs(Temp)))/(2 * a);
           y=sqrt((fabs(Temp)))/(2 * a);

          printf("The first imaginary part value is: %.0lf+%.2lf i \n",((-b)/2*a), x);

           printf("The Second imaginary part value is: %.0lf-%.2lf i \n",((-b)/2*a),y);
        }
    return 0;

}
