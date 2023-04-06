/*Write a program to input the angles of a triangle and check whether a triangle is valid or not.


Write a program to input the arm length of a triangle and check whether a triangle is valid or not.
*/
#include<stdio.h>
int main()
{
    int x;
    float a,b,c;
    printf(" \n press 1 to input angle value");
    printf("\n press 2 to input the length of \n ");
    scanf("%d",&x);

    switch(x)
    {

    case 1:

    printf("Give me 3 angles:");
    scanf("%f%f%f",&a,&b,&c);
    if((a<0)||(b<0)||(c<0))
    {
        printf("Entered value must be Positive.");
    }

   else if((a+b+c==180) && ((a+b)>c || (b+c)>a || (a+c)>b ))
        {
    printf("\n Triangle Is Possible ");
}

    else
        printf("\n Triangle Is Not Possible");
        break;

   case 2:

    printf("Give me 3 lengths of the sides,:");
    scanf("%f%f%f",&a,&b,&c);
    if((a<0)||(b<0)||(c<0))
    {
        printf("Entered value must be Positive.");
    }

   else if((a+b)>c && (b+c)>a && (a+c)>b )
    {
    printf("\n Triangle Is Possible ");
}
    else
        printf("\n Triangle Is Not Possible");
        break;

}
getch();
}
