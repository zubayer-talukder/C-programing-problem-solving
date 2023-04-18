// Write a  C program That Will Count the Even Number From an array
#include<stdio.h>
    int main(){
    int arr[100],i,n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter The Elements of Array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]%2==0)
            {
                count++;
            }
        }
        printf("Total Even Number is : %d ",count);
        getch();
    }
