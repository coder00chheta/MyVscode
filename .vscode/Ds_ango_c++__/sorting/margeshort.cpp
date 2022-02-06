#include<iostream>
using  namespace std;
void marge(int *a,int l,int m,int u)
{
    int *k=new int[u-l+1];
    int x=l,y=m+1,z=0;
    while(x<=y)
    {
        if(x>m)
        {
            for(int iy=y;iy<=u;iy++)
            {
                k[z]=a[iy];
                z++;
            }
            break;
        }
        if(y>u)
        {
            for(int iy=x;iy<=m;iy++)
            {
                k[z]=a[iy];
                z++;
            }
            break;
        }
        else if(a[x]<a[y])
        {
            k[z]=a[x];
            z++;
            x++;
        }
        else
        {
            k[z]=a[y];
            y++;
            z++;
        }
    }
    for(int ix=0,iy=l;ix<z;ix++,iy++)
    {
        a[iy]=k[ix];
    }
}
void margesort(int *a,int l,int u)
{
    int m=(l+u)/2;
    if(l>=u)
        return;
    margesort(a,l,m);
    margesort(a,m+1,u);
    marge(a,l,m,u);    
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
    int *arr=new int[size];
    in(arr,size);
    margesort(arr,0,size-1);
    display(arr,size);
return 0;
}
