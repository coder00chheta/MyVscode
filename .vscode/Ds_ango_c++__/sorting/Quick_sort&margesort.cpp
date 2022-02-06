#include<iostream>
using  namespace std;
int Quick(int *a,int l,int u)
{
    int loc=l,right=u,left=l;
    while(left<right)
    {
        while(left<right && a[loc]<a[right])
            right--;
        if(right==left)
            break;
        else
        {
            int temp=a[loc];
            a[loc]=a[right];
            a[right]=temp;
            loc=right;
        }
        while(left<right && a[left]<a[loc])
            left++;
        if (left==right)
            break;
        else
        {
            int temp=a[loc];
            a[loc]=a[left];
            a[left]=temp;
            loc=left;
        }
        break;
    }
    return(loc);
}
void Quick_sort(int *a,int l,int u)
{
    int loc;
    loc=Quick(a,l,u);
    if(l<loc-1)
        Quick_sort(a,l,loc-1);
    if(loc+1<u)
        Quick_sort(a,loc+1,u);
}
void marge(int *a,int l,int m,int u)
{
    int i=l,j=m+1,k=0;
    int *p=new int[u-l];
    while(i<j)
    {
    if(i==m)
    {
        for(int l=j;l<=u;l++)
        {
            p[k]=a[l];
            k++;
        }
        break;
    }
    else if(j==u)
    {
        for(int l=i;l<=m;l++)
        {
            p[k]=a[l];
            k++;
        }
        break;
    }
    else if(a[i]<a[j])
    {
        p[k]=a[i];
        k++;
        i++;
    }
    else
    {
        p[k]=a[j];
        k++;
        j++;
    }
    }
    
}
int* margesort(int *a,int l,int u)
{
    int m=(l+u)/2;
    if(l<u)
    {
        margesort(a,l,m);
        margesort(a,m+1,u);
        marge(a,l,m,u);
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
    Quick_sort(arr,0,size-1);
    display(arr,size);
return 0;
}
