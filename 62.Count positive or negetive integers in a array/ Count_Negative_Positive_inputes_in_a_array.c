#include<stdio.h>
int main(){
    int j,i,negetive=0,positive=0;
    printf("How many inputs do you want to take : ");
    scanf("%d",&i);
    int x[i];
    printf("Give me inputs. \n");
    for(j=0;j<i;j++){
    scanf("%d",&x[j]);
    if(x[j] < 0){
        negetive++;
    }
    if (x[j]>0){
        positive++;}}
    printf("\n Negetive number is : %d",negetive);
    printf("\n Positive Number is : %d",positive);
    

    
}
