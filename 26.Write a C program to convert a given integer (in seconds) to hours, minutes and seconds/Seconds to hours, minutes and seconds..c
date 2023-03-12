//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{

    int x,hours,minutes,seconds,Temp;
    printf("Give me SECONDS VALUE:");
    scanf("%d",&x);

    hours=x/3600;
    Temp=x%3600;

    minutes=Temp/60;
    Temp=Temp%60;

    seconds=Temp;

    printf("\n \n HH:MM:SS=%d:%d:%d",hours,minutes,seconds);


getch();


}
