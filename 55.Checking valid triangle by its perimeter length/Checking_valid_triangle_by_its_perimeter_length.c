#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st triangle length. :\n");
    scanf("%d",&a);
    printf("Enter 2nd triangle length. :\n");
    scanf("%d",&b);
    printf("Enter 3rd triangle length. :\n");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid triangle");
    }
    else 
    printf("Un-Valid triangle");
}