//Write a program to input any character and check whether it is the alphabet, digit, or special character.

#include<stdio.h>
int main()
{
    char input;
    printf("Enter Something: ");
    scanf("%c",&input);
    if((input>='a'&&input<='z')||( input>='A' && input<='Z'))
    {printf("\n %c is a Alphabet",input);}

    else if( input>='0'&&input<='9')
        {printf("\n %c is a Digit",input);}
    else
        {printf("\n SPECIAL CHARACTER");}

return 0;
}
