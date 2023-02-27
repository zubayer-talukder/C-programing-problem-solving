#include<stdio.h>
int main()
{
char ch;
float a,b,result=0;
printf(" Please enter the operation that you want to do :\n");
scanf("%c",&ch);
printf("Enter the numbers:\n");
scanf("%f%f",&a,&b);
switch (ch)
{
    case '+':
        result=a+b;
        break;

    case '-':
        result=a-b;
        break;

    case '*':
        result=a*b;
        break;


    case '/':
        result=a/b;
        break;


    default :
        printf("Invalid option!!!");
        break;
}
printf("THE Result is %.2f", result);

getch();

}
