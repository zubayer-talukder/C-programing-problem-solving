//Write a program to find the sum of elements in an array.
#include<stdio.h>
int main()
{
    int arr[100],n,j,sum=0;
    printf("\n Enter the size of array:");
    scanf("%d",&n);
    printf("\n Enter the Array as inputs :");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
        sum=sum+arr[j];
    }

    printf("\n The sum of the ARRY Elements are:%d",sum);
getch();
}
