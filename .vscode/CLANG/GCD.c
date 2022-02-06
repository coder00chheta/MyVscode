#include<stdio.h>
int gcd(int x,int y);
int main(){
    int x,y,i;
    scanf("%d %d",&x,&y);
    i=gcd(x,y); 
    printf("%d",i);
    return 0;
}
int gcd(int x,int y)
{
    if(x==y)
    return x;
    if(x%y==0)
    return y;
    if(y%x==0)
    return x;
    if(x>y)
    return(gcd(x%y,y));
    else
    {
    return(gcd(x,y%x));
    }
    
}