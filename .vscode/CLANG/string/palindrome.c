#include<stdio.h>
int peli(char s[]);
int main(){
    char s[20];
    int i;
    gets(s);
    i=peli(s);
        if(i>0)
        printf("yes");
        else
        {
            printf("no");
        }
        
    return 0;
}
int peli(char s[])
{
    int i,j;
    for(j=0;s[j];j++);
    
    for(i=0;i<j/2;i++)
    {
        if(s[i]!=s[j-i-1])
        {return(0);
          }
    }
    return(1);
}