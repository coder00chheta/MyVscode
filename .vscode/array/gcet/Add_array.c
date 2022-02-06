#include<stdio.h>

int main(){
    int a[3],i,b[3],c[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<3;i++)
    {
       c[i]=a[i]+b[i];
    }
     for(i=0;i<3;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}