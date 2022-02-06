#include<stdio.h>

int main(){
    int a[10],i,j=0,k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        j=j+a[i];
    }
     j=j/10;
     printf("%d",j);
    return 0;
}
