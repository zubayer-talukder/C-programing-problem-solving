#include<stdio.h>
int main()
{
    int a[100],j,temp;
    printf("Give me size of array :");
    scanf("%d",&j);
    printf("\n Enter the Elements of ARRAY:");
    for(temp=0;temp<=j-1;temp++)
    {
        scanf("%d",&a[temp]);
    }
    printf("PRINTING the Value Of ARRAY:");

    for(temp=0;temp<=j-1;temp++){
        printf("%d ",a[temp]);
    }
    getch();
}
