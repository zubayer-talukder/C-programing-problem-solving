// a program to enter the length, and breadth of a rectangle and find its perimeter
//and area
#include<stdio.h>
int main()
{
    float a,b,area,perimeter;
    printf("Give me length:\n");
    scanf("%f",&a);
    printf("Give me breadth:\n");
    scanf("%f",&b);
    perimeter= 2*(a*b);
    area=a*b;
    printf("perimeter= %.2f\n",perimeter);
    printf("\n Area=%.2f",area);
    getch();
}
