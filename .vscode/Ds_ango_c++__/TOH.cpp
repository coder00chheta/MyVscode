#include<iostream>
using  namespace std;

void toh(int n,char big,char mid,char end)
{
    if(n==0)
        return;
    toh(n-1,big,end,mid);
    cout<<big<<"->"<<end<<endl;
    toh(n-1,mid,big,end);
}
int main(){
    char a='A',b='B',c='C';
    toh(3,a,b,c);
return 0;
}