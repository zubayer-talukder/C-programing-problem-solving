//Program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Give me a Number :");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
        printf("You have entered %d , This a  even number",num);
        break;
        case  1:
        printf("You have entered %d , This a odd number",num);
        break;
        }

        getch();

}
