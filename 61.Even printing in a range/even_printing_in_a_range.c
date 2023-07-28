//even printing in a range
#include<stdio.h>
int main(){
    int a,b;
    printf("Give me a starting value:");
    scanf("%d",&a);
    printf("Give me a Ending value:");
    scanf("%d",&b);
    for(a;a<=b;a++){
        if(a%2==0){
        printf(" %d ",a);}
    }
    return 0;
}