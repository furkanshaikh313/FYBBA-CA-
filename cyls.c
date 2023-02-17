#include<stdio.h>

int main(){
    int rad,hei;
    float sur,vol;
    float pi = 3.14;
    printf("please enter height and radius");
    scanf("%d %d", &hei,&rad);
    vol = pi * rad * rad * hei;
    sur = 2 * (pi * rad * (hei + rad));
    printf("the volume is %f",vol);
    printf("suface are is %f",sur);
    return 0;
}