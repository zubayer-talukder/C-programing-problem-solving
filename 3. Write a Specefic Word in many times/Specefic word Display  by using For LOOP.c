#include<stdio.h>
int main ()
{
int a,i;
printf("How many Times do you want to print 'I LOVE YOU' ?");
scanf("%d",&a);
for(i=1;a>=i;i++)
    {
    printf(" I LOVE YOU (%d)\n",i);
}
getch();
}
