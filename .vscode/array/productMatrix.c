#include<stdio.h>

int main(){
    int i,j,k,x=0;
    int a[3][3],b[3][3],c[3][3];
    printf("first matrix\n");
    for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);}
    printf("secound matrix\n");
    for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);}
        for(i=0;i<3;i++)
            {for(j=0;j<3;j++)
            c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];}
             x=c[0][0]*(c[1][1]*c[2][2]-c[2][1]*c[1][2])-c[0][1]*(c[1][0]*c[2][2]-c[2][0]*c[0][2])+c[0][2]*(c[1][0]*c[2][1]-c[2][0]*c[1][1]);
          printf("value of c=%d\n",x);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
            printf("\n");}
    
    return 0;
}