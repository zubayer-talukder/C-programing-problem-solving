//Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
#include<stdio.h>
int main()
{

    int amount, note1000, note500, note200, note100,note50, note20, note10,note5,note2,note1,TEMP;
    printf("Amount:");
    scanf("%d",&amount);
    note1000=amount/1000;
    TEMP=amount%1000;

    note500=TEMP/500;
    TEMP=TEMP%500;

    note200=TEMP/200;
    TEMP=TEMP%200;

    note100=TEMP/100;
    TEMP=TEMP%100;

    note50=TEMP/50;
    TEMP=TEMP%50;

    note20=TEMP/20;
    TEMP=TEMP%20;

    note10=TEMP/10;
    TEMP=TEMP%10;

    note5=TEMP/5;
    TEMP=TEMP%5;

    note2=TEMP/2;
    TEMP=TEMP%2;

    note1=TEMP/1;
    TEMP=TEMP%1;
    printf(" THE Amount is = %d",amount);
    printf("\n The smallest possible number of bank notes are Given Below:");
    printf("\n Number of 1000 notes: %d\n",note1000);

    printf("Number of 500 notes: %d\n",note500);

    printf("Number of 200 notes: %d\n",note200);

    printf("Number of 100 notes: %d\n",note100);

    printf("Number of 50 notes: %d\n",note50 );

    printf("Number of 20 notes: %d\n",note20);

    printf("Number of 10 notes: %d\n",note10);

    printf("Number of 5 notes: %d\n",note5);

    printf("Number of 2 notes: %d\n",note2);

    printf("Number of 1 notes: %d\n",note1);


    return 0;


}
