//Write a program to find the third angle of a triangle if two angles are given.
#include<stdio.h>
int main()
{
    int ang1,ang2,ang3;
    printf("Give me First Angle:");
    scanf("%d",&ang1);
    printf("\n Give me Second Angle:");
    scanf("%d",&ang2);
    ang3= 180 -(ang1 + ang2);
    printf("\n The third angle is :%d",ang3);
    getch();
}
