#include<iostream>
using  namespace std;

void Bubblesort(int*a,int size)
{
    int t,Rnd=0;
    for(int i=0;i<size;i++)
    {Rnd=0;
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                Rnd++;
            }
        }
        if(Rnd==0)
        {
            if(i==0)
                cout<<"already sorted"<<endl;
            else
            cout<<"/nshorted at round "<<i+1<<endl;
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
    int size=10;
    int arr[size];
    in(arr,size);
    Bubblesort(arr,size);
    display(arr,size);
return 0;
}