#include<stdio.h>
int bs(int a[10]);
int main(){
    int a[10],i;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    bs(a);
    for(i=0;i<10;i++)
    {
    printf("%d,",a[i]);
    }
    return 0;
}
int bs(int a[10])
{
    int i,r,sw;
    for(r=1;r<10;r++)
     for(i=0;i<10-r;i++)
        if(a[i]>a[i+1])
        {
            sw=a[i];
            a[i]=a[i+1];
            a[i+1]=sw;
        }
}