//Write a Program to calculate the area of an equilateral triangle.
#include<stdio.h>
#include<math.h>
int main()
{
    float x,area;
    printf("Give me the length side of Triangle:\n");
    scanf("%f",&x);
    area=((sqrt(3))/4)*x*x;
    printf("your Area of Triangle is :%.3f",area);
    getch();
}
