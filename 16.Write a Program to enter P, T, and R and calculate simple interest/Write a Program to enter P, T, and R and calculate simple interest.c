//Write a Program to enter P, T, and R and calculate simple interest
#include<stdio.h>
int main()
{
    int P;
    float I,T,R;
    printf("Principle Ammount:");
    scanf("%d",&P);
    printf("\n Interest Rate : ");
    scanf("%f",&R);
    printf("\n Interest Time:");
    scanf("%f",&T);
    I=P*R*T;
    printf("\n Simple Interest:%.2f",I);
    getch();
}
