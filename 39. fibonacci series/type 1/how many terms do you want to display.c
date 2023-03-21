// fibonacci series problem : how many terms do you wanna display.
#include<stdio.h>
int main()
{
    int first=0,second=1,fibo,n,i;
    printf("How many terms do you wanna display?:");
    scanf("%d",&n);

    fibo=first+second;
    printf("Fibonnaccci series:%d,%d,",first,second);
    for(i=3;n>=i;i++)
    {
        fibo=first+second;
        printf("%d,",fibo);
        first=second;
        second=fibo;
    }
   getch();

}
