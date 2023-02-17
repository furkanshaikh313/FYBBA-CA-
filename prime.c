#include<stdio.h>
#include<conio.h>

int main(){
    int i,j;
    scanf("%d",&i);
    for(j=2;j<i;j++){
        if(j%i==0){
            printf("this is prime no.");
        }
        else{
            printf("not a prime");
        }
    }
}