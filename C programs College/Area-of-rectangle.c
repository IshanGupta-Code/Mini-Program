// WAP to find area of rectangle.

#include<stdio.h>
int main(){
// Define Variables
    int l, b, area;
// Print Length 
    printf("Enter the length of Rectangle:");
    scanf("%d",&l);
// Print Breath
    printf("\nEnter the area of rectangle:");
    scanf("%d",&b);
//Calculate Area of Rectangle
    area=l*b;
//Print area of rectangle
    printf("\nArea of rectangle:%d",area);
    return 0;
}