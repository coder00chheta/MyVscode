#include<iostream>
using  namespace std;

void insertion(int *a,int size)
{
    for(int i=1;i<size;i++)
    {
        int temp,x=i;
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>a[x])
            {
                temp=a[x];
                a[x]=a[j];
                a[j]=temp;
                x--;
            }
            else
                break;
        }
        
    }
}
void display(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
void in(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
int main(){
    int size;
    cout<<"size= ";
    cin>>size;
    int arr[size];
    in(arr,size);
    insertion(arr,size);
    display(arr,size);
return 0;
}