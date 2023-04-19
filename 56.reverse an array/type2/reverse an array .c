    // Write a program to reverse an array.
    #include<stdio.h>
    int main()
    {
        int a[100],b[100],n,i,j=0,tempo;
        printf("\n Enter the Size of Array (max 100) :  ");
            scanf("%d",&n);
        printf("\n Enter the %d elements of an array : ",n);

        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);

            b[n-i-1]=a[i];
                }
        printf("REVERSED Arrays are:");
        for( i=0 ; i<n;i++ )
        {
        printf(" %d ",b[i]);
}
getch();
}
