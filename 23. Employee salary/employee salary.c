//Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
//Print the ID and salary (with two decimal places) of the employee for a particular month.
#include <stdio.h>
int main() {
	char id[10];
	int hours;
	double rate, salary;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);
	printf("\nInput the working hrs: ");
	scanf("%d", &hours);
	printf("\nSalary amount/hr: ");
	scanf("%lf", &rate);
	salary = rate * hours;
	printf("\nEmployees ID = %s\nSalary = BDT %.2lf\n", id,salary);
	return 0;
	}
