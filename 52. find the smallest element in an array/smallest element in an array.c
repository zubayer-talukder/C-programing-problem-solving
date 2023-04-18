//Write a program to find the smallest element in an array.
#include<stdio.h>
int main()
{
    int array[100],x,n,smallest;

    printf("Enter the Size of array: ");

    scanf("%d",&n);

    printf("\nEnter The ELEMENts of Array: ");

    for(x=0 ; x<n; x++){

        scanf("%d",&array[x]);
    }
    smallest=array[0];

    for(x=1;x<n;x++){

        if(array[x]>smallest)
            {}
        else
             smallest=array[x];
    }
    printf("\nTHE Smallest  Elements of Array is: %d",smallest);
    getch();
}
