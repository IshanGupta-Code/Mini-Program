#include<stdio.h>
int main(){
    //define constants
    float radius,area, pie=3.14 ;

    // Print Radius of circle
    printf("Enter the radius of circle:");
    scanf("%f",&radius);

    // Claculate area of circle
    area=pie*radius*radius;

    // Print area of circle
    printf("Area of cirlce:%f",area);
    return 0;
}