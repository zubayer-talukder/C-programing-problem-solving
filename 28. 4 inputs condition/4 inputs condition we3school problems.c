//Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even.
// If q is greater than r
//and s is greater than p and if the sum of r and s is greater than the sum of p and q print
//"Correct values", otherwise print "Wrong values"
#include<stdio.h>
int main()
{
    int p,q,r,s;
    printf("Give me 4 integer:\n");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if((s>0)&&(q>0)&&(r>0)&&(p%2==0)&&(q>r)&&(s>p)&&((r+s)>(p+q)))
    {
        printf("Correct values");
    }
    else printf("wrong Values");
    getch();
}


