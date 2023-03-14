//Write a C program that reads an integer and checks the specified range to which it belongs.
// Print an error message if the number is negative and greater than 80
#include<stdio.h>
int main()
{
    int a;
    printf("Enter The Integer Value:");
    scanf("%d",&a);
    if(a<0 || a>80 )
    {
        printf("Error: number must be between 0 and 80.");

    }
   else if (a>=0&&a<=10)
    {
        printf("%d is belongs to the Ranges 0-10.\n ",a);
    }

    else if(a>=11&&a<=20)
    {
        printf("%d is belongs to the Ranges 11-20.\n ",a);
    }
    else if(a>=21&&a<=30)
    {
        printf("%d is belongs to the Ranges 21-30.\n ",a);
    }
    else if(a>=1&&a<=40)
    {
        printf("%d is belongs to the Ranges 31-40.\n ",a);
    }
    else if(a>=41&&a<=50)
    {
        printf("%d is belongs to the Ranges 41-50.\n ",a);
    }
    else if(a>=51&&a<=60)
    {
        printf("%d is belongs to the Ranges 51-60.\n ",a);
    }
    else if(a>=61&&a<=70)
    {
        printf("%d is belongs to the Ranges 61-70.\n ",a);
    }
    else if(a>=71&&a<80)
    {
        printf("%d is belongs to the Ranges 71-80.\n ",a);
    }

    getch();
}
