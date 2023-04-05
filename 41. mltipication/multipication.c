//this program will show you multipication  ttmes Table series


#include<stdio.h>
int main()
{
    int z,n,i=1;
        printf("Send me any multipication number:");

    scanf("%d",&n);

    for(;i<=10;i++)
{
    z=n*i;
    printf("%d x %d = %d \n",n,i,z);

}
return 0;

}
