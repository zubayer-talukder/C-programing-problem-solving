//lower letter to upper letter conversion
#include<stdio.h>
int main()
{

        char ch;

        printf("Give me Lower letter:");
        scanf("%c",&ch);
        ch=ch-32;
        printf("\n Your Upper letter is :%c",ch);
        getch();

}
