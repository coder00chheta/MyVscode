#include<stdio.h>

int main(){
    int a[5],i,d,dir,tem[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("num of elements:");
    scanf("%d",&d);
    printf("direction'+1' or '-1'::");
    scanf("%d",&dir);
    if(dir==(+1))
    {
        for(i=0;i<d;i++)
            tem[i]=a[d+i+1];
        for(i=4-d;i>=0;i--)
            a[d+i]=a[i];
        for(i=0;i<d;i++)
            a[i]=tem[i];
    }
    else if(dir==(-1))
    {
        for(i=0;i<d;i++)
            tem[i]=a[i];
        for(i=0;i<5-d;i++)
            a[i]=a[d+i];
        for(i=0;i<d;i++)
            a[5-d+i]=tem[i];
    }
      for(i=0;i<5;i++)
           printf("%d  ",a[i]);
    return 0;
}