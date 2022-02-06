#include<stdio.h>
int count(char str[]);
int main(){
    char str[20];
    int i;
    gets(str);
    i=count(str);
    printf("%d",i+1);
    return 0;
}
int count(char str[])
{
    int i,j=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        j++;
    }
    return(j);
}