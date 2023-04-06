/*Write a program to input the basic salary of an employee and
calculate its Gross salary according to the following:
Basic Salary <= 10000: HRA = 20%, DA = 80%
Basic Salary <= 20000: HRA = 25%, DA = 90%
Basic Salary > 20000: HRA = 30%, DA = 95%
*/
#include<stdio.h>
int main()
{
    float Total,basic,HRA,DA;
    printf("Enter Basic Salary: ");
    scanf("%f",&basic);
  if (basic<=10000){
    HRA=basic*.2;
    DA=basic*.8;
  }
  else if(basic<=20000){
    HRA=basic*.25;
    DA=basic*.90;
  }

   else if(basic>20000)
    {
        HRA=basic*.3;
        DA=basic*.95;
    }
    Total=basic+HRA+DA;

    printf("%.2f",Total);
return 0;
}
