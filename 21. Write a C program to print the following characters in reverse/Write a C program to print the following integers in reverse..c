//Write a C program to print the following integer in reverse.
#include<stdio.h>
int main()
{
    int in1,in2,in3;
    printf("Give Me Three input:\n");
    scanf("%d%d%d",&in1,&in2,&in3);

    printf("The reverse of %d,%d,%d is %d,%d,%d",in1,in2,in3,
    in3,in2,in1);

    getch();

}
