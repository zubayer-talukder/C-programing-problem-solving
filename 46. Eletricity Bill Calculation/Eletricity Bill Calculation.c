/* Write a C program to input electricity unit charges and
calculate the total electricity bill according to the given condition:
For the first 50 units, Taka. 3/unit
For the next 100 units Taka 4 /unit
For the next 100 units, Taka 5.5/unit
For units above 250, Taka 7/unit
An additional basic charge is 90 Taka added to the bill.
*/
#include<stdio.h>
int main()
{
    int basic=90;
    float a,Total;
    printf("Used unit: ");
    scanf("%f",&a);
    if (a<0){
        printf("\n Envalid Input ");
    }
    else if(a>=0&&a<=50)
    {
       Total=a*3+basic;
       // 3 is where a per unit charge
    }
    else if(a>50&&a<=150)
    {
       Total=a*4+basic;
       // 4 is where a per unit charge
    }
    else if(a>150&&a<250)
    {
       Total=a*5.5+basic;
       // 5.5 is where a per unit charge
    }
    else

       Total=a*7+basic;

       printf("\n  your Bill is %.2f Taka",Total);

       getch();
}
