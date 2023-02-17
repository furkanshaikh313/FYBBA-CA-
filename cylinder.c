#include <stdio.h>
#include <conio.h>
 int main(){
    float i,r,h;
    float pi=3.14;
    printf("enter the values:");
    scanf("%d %d",&r,&h);
    i = 2 * pi * r *(r+h);
    printf("the value is:%d", i);
 }