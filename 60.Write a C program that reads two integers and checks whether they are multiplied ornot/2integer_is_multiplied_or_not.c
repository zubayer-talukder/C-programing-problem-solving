//Write a C program that reads two integers and checks whether they are multiplied or not.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Your First Number. ");
    scanf("%d",&a);
    printf("\n Enter Your Second Number.");
    scanf("%d",&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
            }
            if((b % a)== 0) 
	{
		printf("\nMultiplied!\n");
	} 
	else 
	{
		printf("\nNot Multiplied!\n");
	}

    }
    
    
