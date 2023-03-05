//Program to check whether entered character is vowel or consonant by using switch case.
#include<stdio.h>
int main()
{
    char x;
    printf("Give me a alphabet: \n");
    scanf("%c",&x);
    switch(x)
    {
    case'a':
        printf("%c is a vowel. ",x);
        break;
    case'e':
        printf("%c is a vowel. ",x);
        break;
    case'i':
        printf("%c is a vowel. ",x);
        break;
    case'o':
        printf("%c is a vowel. ",x);
        break;
    case'u':
        printf("%c is a vowel. ",x);
        break;
    case'A':
        printf("%c is a vowel. ",x);
        break;
    case'E':
        printf("%c is a vowel. ",x);
        break;
    case'I':
        printf("%c is a vowel. ",x);
        break;
    case'O':
        printf("%c is a vowel. ",x);
        break;
    case'U':
        printf("%c is a vowel. ",x);
        break;
    default :
        printf("%c is a consonent",x);
 }
 getch();
}
