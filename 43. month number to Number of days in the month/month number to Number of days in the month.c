//Write a program to input the month number and print the number of days in that month
#include<stdio.h>
int main()
{
    int x;
    printf("Give me Month Number:");
    scanf("%d",&x);
    if(x<1 || x>12)
    {
        printf("\n \n Invalid input");
    }
    else if( x==2){
        printf("\n \n 28 or 29 days");
    }
    else if(x==4 || x==6 ||  x==9 || x==11){
        printf("\n \n 30 days");
    }
    else
        printf("\n \n 31 days");
    return 0;
}
