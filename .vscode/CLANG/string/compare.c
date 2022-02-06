#include<stdio.h>

int main(){
    char str1[20],str2[20];
    int i,j=0,k=0;
    gets(str1);
    gets(str2);
    for(i=0;str1[i];i++)
    {
        if(str1[i]==str2[i])
        j++;
        else
        {
            k++;
            break;
        }
        
    }
    if(j>0 && k==0)
    printf("same");
    else
    {
        printf("no");
    }
    
    
    return 0;
}