//write a c program that will inputs and sum the even number only.
#include<stdio.h>
int main()
{
    int arr[100],sum=0,temp,a;

    printf("Give me the size how much data you wanna input: ");
    scanf("%d",&a);
    printf("Give me %d Elements : ",a);
    for(temp=0;temp<a;temp++)
    {
        scanf("%d",&arr[temp]);
             if(arr[temp]%2==0)
        {
            sum=sum+arr[temp];
       }

    }
    printf("The Sum of All Even Numbers: %d ",sum);

    getch();
}
