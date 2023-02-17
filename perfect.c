#include<stdio.h>
#include<conio.h>

int main(){
            int i,j,sum=0;
            printf("put the value");
            scanf("%d",&i);
                for(j=0;j>i;j++){
                    if(i%j==0){
                    sum=sum+j;
                    }
                }
            printf("it is a perfect no.");

}