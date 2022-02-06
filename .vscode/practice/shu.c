#include<stdio.h>

int main(){
    int x;
    x=5;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i+1;j++)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }

    return 0;
}