#include<stdio.h>
int pl(int a,int b)
{
    return(a+b);
}
int mn(int a,int b)
{
    return(a-b);
}
int mlt(int a,int b)
{
    return(a*b);
}
float sbt(int a,int b)
{
    return(a/b);
}
int main(){
    int i,a,b;
    char s;
    printf("enter p for'+'\nenter m for'-'\nenter g for '*'\nenter s for '/':");
    scanf("%c",&s);
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    switch (s)
    {
    case 'p':
        printf("%d",pl(a,b));
        break;
    case 'm':
        printf("%d",mn(a,b));
        break;
    case 'g':
        printf("%d",mlt(a,b));
        break;
    case 's':
        printf("%lf",sbt(a,b));
        break;
    default:
        printf("enter valid input");
        break;
    }

    return 0;
}