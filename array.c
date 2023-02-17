#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    int arr[20];
    int g[30];
    printf("enter the size of array");
    scanf("%d", &b);
    for(a=0;a<=b;a++)
    {
        scanf("%d",&arr[a]);
        for(a=2;a<=b;a++)
        {
            g[a]=arr[a]+arr[--a];
            printf("this is the value now:%d",&g[a]);
        }
    }
}