//eligibility  checker for admission Test.
#include<stdio.h>
int main()
{
    int phy,chem,math,bio,Total,Temp;

    printf("conditions for getting Eligible: \n Marks in MATHS >= 65 \n Marks in PHY >= 55 \n Marks in CHEM >= 50 \n Total in all three subjects => 180\n Or, \n Total in Math and physics >=140.");

    printf("\n\n\n Enter your Physics mark:");
    scanf("%d",&phy);
    printf("\n Enter your Chemistry mark:");
    scanf("%d",&chem);
    printf("\n Enter your Biology mark:");
    scanf("%d",&bio);
    printf("\n Enter your Math mark:");
    scanf("%d",&math);
    // conditions for getting Eligible

//Marks in MATHS >= 65
//Marks in PHY >= 55
//Marks in CHEM >= 50
//Total in all three subjects => 180
//Or,
//Total in Math and physics >=140.



 Total=phy+chem+math+bio;
 Temp=math+phy;
if(math>=65 && phy>=55 &&chem>=50 && Total>=180 && Temp>=140)
{
    printf("\n You are Eligible For Admission test.");
}
else
 printf("\n You are not Eligible For Admission test.");
return 0;


}
