//leap year checker
#include<stdio.h>
int main()
{
int x;
printf("\n Give me A year:");
scanf("%d",&x);
if(x<0){
    printf("invalid date");
}
else if (x%400==0)
{
    printf("\n %d is a Leap Year.",x);
}
else if (x%100==0)
{
    printf("\n %d is a not a Leap year.",x);
}
else if(x%4==0)
    {
    printf("\n %d is a Leap Year.",x);}

    else {
        printf("\n %d is not Leap Year.",x);
    }
    getch();
}
