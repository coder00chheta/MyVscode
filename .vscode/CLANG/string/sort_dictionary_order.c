#include<stdio.h>
#include<string.h>
int main(){
    int i,j,r;
    char s[10][20],c[10];
    for(i=0;i<10;i++)
    {gets(s[i]);}
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9-i;j++)
        {
            r=strcmp(s[j],s[j+1]);
            if(r>0)
            {
                    strcpy(c,s[j]);
                    strcpy(s[j],s[j+1]);
                    strcpy(s[j+1],c);

            }
        }
    }

    for(i=0;i<10;i++)
    {printf("::%s\n",s[i]);}
    return 0;
}