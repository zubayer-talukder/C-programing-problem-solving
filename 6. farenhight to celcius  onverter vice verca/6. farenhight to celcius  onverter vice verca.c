#include <stdio.h>

int main()
 {
   int a;
   float c,f;
   printf(" Give me your Choice\n");
   printf("press 1 to convert Celsius to Fahrenheit\n ");
   printf("press 2 to convert Fahrenheit to Celsius  conversion\n");
   scanf("%d",&a);



       switch (a){
       case 1:
            printf("Celsius to Fahrenheit  converter\n");
            scanf("%f",&c);
            f=(c*9/5)+32;
            printf("YOUR RESULT IN FARENHEIGHT IS:%.2f F",f);
            break;

       case 2:
        printf("Fahrenheit to Celsius  converter\n");
        scanf("%f",&f);
        c=((f-32)*5/9);
        printf("Your result is : %.2f C",c);
        break;

        default:
        printf("INVALID INPUT");

   }
   return 0;

   }
