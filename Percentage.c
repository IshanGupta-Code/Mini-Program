// WAP insert the marks of phy, chem. And maths and find out the total and percentage

#include<stdio.h>
int main(){
    int phy, chem, math ;
    float per ;
    printf("Enter the Marks of Physics:");
    scanf("%d",&phy);

    printf("Enter of Marks of Chemistry:");
    scanf("%d",&chem);

    printf("Enter the Marks of Maths:");
    scanf("%d",&math);

    per=(phy+chem+math)/3;
    printf("Percentage=%f",per); 
    return 0;
}
