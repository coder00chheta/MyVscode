#include<stdio.h>

int main(){
    int a[4],i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=3;i>=0;i--)
    {
        printf("%d_",a[i]);
    }
    return 0;
}