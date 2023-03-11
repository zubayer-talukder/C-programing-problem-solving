//Write a program to convert specified days into years,months , weeks, and the rest of the days
#include<stdio.h>
int main()
{
    int days,weeks,years,months,remainder;

    printf("Give me days:\n");
    scanf("%d",&days);

    years=days/365;

    remainder=days%365;

    months=remainder/30;

    remainder=remainder%30;

    weeks=remainder/7;

    remainder=remainder%7;

    printf("%d days=%d years,%d months,%d weeks, %d days",days,years,months,weeks,remainder);
    getch();
}
