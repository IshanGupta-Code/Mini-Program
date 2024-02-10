// Given the values of three variables a,b and c ,write a program to compute the value of x , where x=a/b-c.

#include<stdio.h>
int main (){
    int a,b,c,x;

    printf("Enter the value of A, B, C=");
    scanf("%d %d %d" ,&a,&b,&c);

    x=a/b-c;
    printf("Value of X:%d",x);
    return 0;
}