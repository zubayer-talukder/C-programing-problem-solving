//Write a Program to enter P, T, and R and calculate compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
    float P,T,R;
    double CI,I;
    //here p=principle amount ,T=Time,R=Interest Rate; CI=Compound Interest, I=only interest
    printf("\n Principle Amount:");
    scanf("%f",&P);
    printf("\n Time:");
    scanf("%f",&T);
    printf("\n Interest Rate:");
    scanf("%f",&R);

    CI=P*pow((1+(R/100)),T);
    I=CI-P;

    printf("\n Compound interest along with principle amount is %.2lf",CI);
    printf("\n Interest= %.2lf ",I);
    getch();

}
