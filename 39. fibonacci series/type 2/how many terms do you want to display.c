// fibonacci series problem : send me the highest value .
#include<stdio.h>
int main()
{
    int first=0,second=1,fibo,n,i;
    printf("Send me the highest positive value!!:");
    scanf("%d",&n);

    fibo=first+second;
    printf("Fibonnaccci series:%d,",first);
    while(fibo<=n)
    {
        printf("%d,",fibo);
        fibo=first+second;

        first=second;
        second=fibo;
    }
getch();

}
