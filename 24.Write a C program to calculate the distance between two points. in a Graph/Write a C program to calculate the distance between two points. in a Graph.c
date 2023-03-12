//Write a C program to calculate the distance between two points in a Graph.
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("\n Give me the Value of First point Value:");
    scanf("%f%f",&x1,&y1);
    printf("\n Give me the Value of Second point Value:");
    scanf("%f%f",&x2,&y2);
    distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.4f\n", x1, y1, x2, y2, distance);
    return 0;


}
