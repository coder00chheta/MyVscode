#include<iostream>
using  namespace std;
int binary(int *a,int l,int u,int data)
{
    int mid=(u-l)/2;
    if(l<=u)
    {
        if(data==a[mid])
            return mid;
        else if(data<a[mid])
            return binary(a,l,mid,data);//note it is imortant to return;
        else
            return binary(a,mid+1,u,data);
    }


    return -1;
}
int linear(int *a,int size,int data)
{
    int index;
    for(index=0;index<size;index++)
        if(a[index]==data)
            return(index);
    return -1;
}
int main(){
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    cout<<binary(a,0,4,23);
return 0;
}