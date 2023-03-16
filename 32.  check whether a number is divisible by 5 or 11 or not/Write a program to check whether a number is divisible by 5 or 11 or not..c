//Write a program to check whether a number is divisible by 5 or 11 or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("%d is devisible by 5",a);

        }

        else if(a%11==0)
        {
            printf("%d is devisible by 11",a);
        }
        else
        printf("%d is not devisible by 5 & 11 ",a);
    return 0;
}
