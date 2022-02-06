#include<stdio.h>

int main(){
    int i,j,x[8],c[3][3];
    for(i=0;i<3;i++){
       for(j=0;j<3;j++)
       {scanf("%d",&c[i][j]);}}
     for(i=0;i<3;i++)
       
        {
            x[i]=c[i][0]+c[i][1]+c[i][2];
            
        }
     for(i=0;i<3;i++)
        {
            x[i+3]=c[0][i]+c[1][i]+c[2][i];
        }
     x[6]=c[0][0]+c[1][1]+c[2][2];
     x[7]=c[0][1]+c[1][1]+c[2][0];
     for(j=0;j<7;j++)
     {
         if(x[i]==x[i+1])
         {}
         else
         {
             printf("na ji");
             break;
         }
         
     }
     printf("done");
    return 0;
}