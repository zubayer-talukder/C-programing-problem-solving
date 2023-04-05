/* this programe will print odd number between 1-100 */

#include<stdio.h>
int main()
{
    int a=1;
    while(a<1000){

         a++;
         if(a%2==0){
           continue;
         }

printf("%d  ",a);
    }
    getch();

}
