#include<stdio.h>
#include<conio.h>
#include<math.h>
int pow,i,j;
int mine();
int main(){
int i,j;
printf("enter the base no.");
scanf("%d",&i);
printf("enter the power");
scanf("%d",&j);
mine(&i,&j);
getch();
}

int mine(int k){
       
        pow=i * i;
        printf("this is power %d",pow);
        }