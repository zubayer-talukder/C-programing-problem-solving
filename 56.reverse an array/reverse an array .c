    // Write a program to reverse an array.
    #include<stdio.h>
    int main()
    {
        int arr[100],n,i,tempo;
        printf("\n Enter the Size of Array (max 100) :  ");
            scanf("%d",&n);
        printf("\n Enter the %d elements of an array : ",n);

        for(i=0;i<n;i++)
            {
            scanf("%d",&arr[i]);
        }
printf ("\n Reversed array are :");
            for(i=n-1;i>=0;i--){
                printf(" %d ",arr[i]);
            }
            return 0;
    }
