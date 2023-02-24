//2. Write a program to enter two numbers and perform all arithmetic operations
#include<stdio.h>
int main()
{
    int x,y,sum,sub,multi;
    float div;
    printf("GIve your inputs: \n");
    printf("(note: In inputs first letter must be greater than other one\n)");
    scanf("%d%d",&x,&y);
    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=(float)x/y;
    printf("The summation of %d & %d is :%d \n",x,y,sum);
    printf("The subtraction of %d & %d is :%d \n",x,y,sub);
    printf("The multiplication of %d & %d is :%d \n",x,y,multi);
    printf("The division of %d & %d is :%.2f \n",x,y,div);
    getch();

}
