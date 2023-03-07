//Write a Program to enter marks of five subjects and calculate the total, average, and percentage
#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg,per;
    // let 5 subjects are physics,chemistry, biology, math,english
    printf("Give me Physics Number:");
    scanf("%d",&a);
    printf("\n Give me Chemistry Number:");
    scanf("%d",&b);
    printf("\n Give me Biology Number:");
    scanf("%d",&c);
    printf("\n Give me Math Number: ");
    scanf("%d",&d);
    printf("\n Give me English Number: ");
    scanf("%d",&e);

    total=a+b+c+d+e;
    avg=(total/5);
    per=(total*100)/500;

    printf("\n Total mark is :%d ",total);
    printf("\n Average mark is :%.2f",avg);
    printf("\n Percentage is :%.2f %%",per);
    getch();
}
