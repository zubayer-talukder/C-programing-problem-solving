//Write a program to check whether a number is negative or positive or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Give me a integer value: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("You Have entered 0 Value");
    }
    else if(a<0)
    {
        printf("%d is a Negative Number ",a);
    }
    else if(a>0)
    {
        printf("%d is a Positive Number ",a);
    }
    getch();
}
