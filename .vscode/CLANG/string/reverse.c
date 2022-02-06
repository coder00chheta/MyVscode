#include<stdio.h>
#include<string.h>
int main(){
    char str[20],x;
    int i,l;
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++)
     {
        x=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=x;
}
printf("%s",str);
       
    
    return 0;
}