//Write a program to find the average of elements in an array.
#include<stdio.h>
int main()
{
    int zubayer[100],n,i,sum=0;
    float avg;
    printf("Give me the Size of array: ");
    scanf("%d",&n);
    printf("Give me  The Elements of Array: ");

    for(i=0;i < n;i++)
    {
        scanf("%d",&zubayer[i]);
        sum=sum+zubayer[i];
    }

    avg=(float)sum/n;
    /* here i have type cast a integer data otherwise
    inter divided by another integer will give me a  integer value.
    to avoid this issue i have fixed sum value integer to float*/

printf("YOUR Average of all elements are : %.2f",avg);

getch();
}
