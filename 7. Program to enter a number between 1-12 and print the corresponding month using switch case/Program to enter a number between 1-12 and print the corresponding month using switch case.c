//Program to enter a number between 1-12
// print the corresponding month using switch case
#include<stdio.h>
int main()
{
    int x;
    printf("Give me number between 1 to 12 :\n");
    scanf("%d",&x);
    switch(x)
{

        case 1:
        printf("You have entered %d = January",x);
        break;

        case 2:
        printf("You have entered %d = February",x);
        break;

        case 3:
        printf("You have entered %d = March",x);
        break;

        case 4:
        printf("You have entered %d = April",x);
        break;

        case 5:
        printf("You have entered %d = May",x);
        break;

        case 6:
        printf("You have entered %d = June",x);
        break;

        case 7:
        printf("You have entered %d = July",x);
        break;

        case 8:
        printf("You have entered %d = August",x);
        break;

        case 9:
        printf("You have entered %d = September",x);
        break;

        case 10:
        printf("You have entered %d = October",x);
        break;

        case 11:
        printf("You have entered %d = November",x);
        break;

        case 12:
        printf("You have entered %d = December",x);
        break;

    }
    getch();
}
