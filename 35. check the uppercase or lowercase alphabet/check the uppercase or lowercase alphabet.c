//Write a program to check the uppercase or lowercase alphabet.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter A Alphabet:");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    {
        printf("You have Entered Uppercase.");
    }
    else if ((ch>='a')&&(ch<='z'))
    {
        printf("You have Entered Lower Case");
    }
    else
    printf("Not Alphabet");
    getch();
}
