#include<stdio.h>

int main(){
    int a[10],i,j,k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=1;i<10;i++)
    {
     
       if(a[0]> a[i])
        a[0]=a[i];
        

    }
    printf("gre%d::",a[0]);
    return 0;
}