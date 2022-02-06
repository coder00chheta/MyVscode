#include<stdio.h>
int main(){
    char str[20],v[11]={"aeiouAEIOU"};
    int i,j,z=0,x=0,y=0;
    gets(str);
    for(i=0;str[i];i++){
    for(j=0;v[j];j++)
     {
        if(str[i]==v[j])
        {x++;
        break;}
        
     }}
       printf("%dvowels :",x);
    return 0;
}