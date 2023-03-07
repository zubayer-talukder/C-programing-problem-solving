//Write a c program to find the largest number among given three number
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Give me First number:");
    scanf("%d",&a);
    printf("Give me Second number:");
    scanf("%d",&b);
    printf("Give me Third number:");
    scanf("%d",&c);
    if(a>b && a>c )
    {
        printf("%d is the Biggest number",a);
    }
    else if (b>a&&b>c)
    {
        printf("%d is the Biggest Number",b);
    }
    else if(c>a&&c>b)
    {
        printf("The Biggest Number is %d ",c);
    }
    getch();
}
