#include<stdio.h>
double power(int x,int y)
{
    int i;
    double p=1;
    for(i=0;i<y;i++)
        p*=x;
    return p;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%lf",power(x,y));
    return 0;
}