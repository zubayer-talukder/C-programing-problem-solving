#include<stdio.h>
int main(){
    int a,i,count=0;
    printf("Enter a Number. : ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
        {
            if(a%i==0){
                count++;
                break;
            }
}
    if(count==0){
        printf("%d is a prime number.",a);
}
    if (count==1){
        printf("%d is not a prime number.",a);
    }
    return 0;
}