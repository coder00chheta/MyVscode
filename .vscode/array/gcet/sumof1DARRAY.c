#include<stdio.h>

int main(){
    int a[5],i,s=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        s+=a[i];
    printf("%d",s);


    return 0;
}