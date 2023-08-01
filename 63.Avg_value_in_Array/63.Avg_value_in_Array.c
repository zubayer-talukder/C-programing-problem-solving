#include<stdio.h>
int main(){
      int i=0,n;
      float result;
      printf("How many inputs do you want to take: ");
      scanf("%d",&n);
      printf("Enter inputs.\n");
      int arr[n], sum=0;
      for(i;i<n;i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
      }
      result=(float) sum/n;
      printf("Your answer is %.2f",result);
      return 0;
}