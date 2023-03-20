// write a program that reads temperature  in centigrade and display a suitable message according  to the temparature
#include<stdio.h>
int main()
{

    float temp;

    printf("\n Temp < 0 then Freezing weather \n Temp 0-10 then Very Cold weather \n Temp 10-20 then Cold weather \n  Temp 20-30 then Normal in Temp \n Temp 30-40 then Its Hot \n Temp >=40 then Its Very Hot");


    printf("\n \n \n Give me Your Temperature:");
    scanf("%f",&temp);

if(temp<=0)
{
    printf("Its a Freezing Weather.");
}
else if((temp>0)&&(temp<=10))
{
    printf("Very Cold Weather.");
}
else if ((temp>10)&&(temp<=20))
{
    printf("Cold Weather.");
}
else if ((temp>20)&&(temp<=30))
{
    printf("Normal Temperature");
}
else if((temp>30)&&(temp<=40))
{
    printf("It's Hot.");
}
else if ((temp>40))
{
    printf("It's Very Hot");
}
return 0;
}
