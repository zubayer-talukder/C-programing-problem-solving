//Write a program to find the largest element in an array.
#include<stdio.h>
int main()
{
    int array[100],x,n,largest;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    printf("\nEnter The ELEMENts of Array: ");
    for(x=0;x<n;x++){
        scanf("%d",&array[x]);
    }
    array[0]=largest;

    for(x=0;x<n;x++){
        if(array[x]>largest){
            largest=array[x];
        }
    }
    printf("\nTHE Largest Elements of Array is: %d",largest);
    getch();
}
