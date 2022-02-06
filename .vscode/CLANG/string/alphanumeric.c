#include<stdio.h>

int main(){
    char str[20],i;
    int x=0,y=0;
    gets(str);
    for(i=0;str[i];i++)
     {if((str[i]>=48 && str[i]<=57)&&(str[i]>='a' && str[i]<='z')&&(str[i]>=97 && str[i]<=121))
     {x++;}
    else
    {
        y++;
    }}
    if(x>0)
     printf("yes");
     if(y>0)
 printf("no");
    return 0;
}