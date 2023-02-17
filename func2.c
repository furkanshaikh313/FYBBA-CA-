#include<stdio.h>
#include<conio.h>
int i,j;
int max(){
    if(i>j){
        printf("first is great");
    }
    else{
        printf("second is great");
    }
    return 0;
}
int main(){
    printf("enter first no.");
    scanf("%d",&i);
    printf("enter second no.");
    scanf("%d",&j);
    max(i,j);
}