//Write a program to check whether you are eligible to make a NID Card or not.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age>=18)
        {
        printf("You are Eligible to Get NID card");
    }
    else
        printf("You are NOT Eligible to Get NID card");
getch();
}
