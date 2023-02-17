#include<stdio.h>
#include<conio.h>
int sum();
int main(){
    int number,result;
    printf("enter positive no.");
    scanf("%d",&number);

    sum(&number);

    printf("sum=%d",result);
}
int sum(int n){
    if(n != 0)
    return n+ sum (n-1);
    else
    return n;
}