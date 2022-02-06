#include<iostream>
using  namespace std;

void in(int* a,int data,int *li)
{
    int index,parindex;
    (*li)+=1;
    a[*li]=data;
    index=*li; 
    while(index>0)
    {
        parindex=(index-1)/2;
        if(a[parindex]<data)
        {
            a[index]=a[parindex];
        }
        else
            break;
        index=parindex;
    }
    a[index]=data;
}
int dlt(int *a,int *li)
{
    int item=a[*li];
    int temp=a[*li];
    (*li)--;
    int index=0,leftindex,rightindex;
    
    while(index<=*li)
    {
        leftindex=2*index+1;
    rightindex=2*index+2;
        if(leftindex>*li)
            break;
        if(rightindex>*li)
        {
            if(temp<a[leftindex])
                a[index]=a[leftindex];
            else
                break;
            index=leftindex;

        }
        if(a[leftindex]>a[rightindex])
        {
            if(temp<a[leftindex])
                a[index]=a[leftindex];
            else
                break;
            index=leftindex;
        }
        else
        {
            if(temp<a[rightindex])
                a[index]=a[rightindex];
            else
                break;
            index=rightindex;
        }
    }
    a[index]=temp;
    return item;
}
void heapsort(int *a,int *li,int j)
{int data;
    while(j>=0)
    {
    if(li>=0)
        data=dlt(a,li);
    j--;
    a[j]=data;
    }
}
int main(){
    int size,lastindex=-1,data;
    cin>>size;
    int *p=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>data;
        in(p,data,&lastindex);
    }
    for(int i=0;i<lastindex;i++)
    {
        cout<<p[i]<<" ";
    }
    //cout<<"\n"<<dlt(p,&lastindex)<<endl;
    heapsort(p,&lastindex,size);
    for(int i=0;i<lastindex;i++)
    {
        cout<<p[i]<<" ";
    }


return 0;
}