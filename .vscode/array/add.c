#include<stdio.h>

int main(){
    int a[10],i,j=0,k=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        j+=a[i];
        else
        {
          k+=a[i];
        }
        
    }
    printf("even%d\n",j);
    printf("odd::%d",k);
    return 0;
}