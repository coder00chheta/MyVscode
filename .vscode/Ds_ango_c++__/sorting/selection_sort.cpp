#include<iostream>
using  namespace std;

void selection_sort(int *a,int size)
{
    
    for(int i=0;i<size-1;i++)
    {
        int sm=a[i],in=i;
        for(int j=i;j<size-1;j++)
        {
            if(sm>a[j+1])
            {
                sm=a[j+1];
                in=j+1;
            }
        }
        if(sm!=a[i])
        {
            a[in]=a[i];
            a[i]=sm;
        }
    }
}
void in(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
void display(int *a,int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}
int main(){
    int size;
    cout<<"size= ";
    cin>>size;
    int arr[size];
    in(arr,size);
    selection_sort(arr,size);
    display(arr,size);
return 0;
}