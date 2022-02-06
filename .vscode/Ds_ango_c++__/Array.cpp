#include<iostream>
using  namespace std;

class Array
{
private:
   int *p,*start,size,lastindex=-1;
public:
   Array(int x){p=new int[x];
   start=p;size=x;}
   void apend(int data)
   {
       if((size-1)>lastindex)
       {
       *p=data;
       p++;
       lastindex++;
       }
       else
       {
           cout<<"\nArray is full\n";
       }
   }
   void insert(int data,int index)
   {
       
       if((size-1)>lastindex)
       {
           int *te=p-1;
           int *fe=p;
           for(int i=lastindex;(i)>=index;i-- )
           {
               *fe=*te;
               te--;
               fe--;
           }
           start[index]=data;
            lastindex++;
       }
       else{
           cout<<"\nArray is full:\n";
       }
   }

    void view()
    {int *t=start;
        cout<<"\n";
        for(int i=0;i<=lastindex;i++)
        {
            cout<<*t<<" ";
            t++;
        }
    }
    void getitemps(int index)
    {
        cout<<"data at "<<index<<" is :"<<*(start+index);
    }
    void DeletAt(int index)
    {
        if(index>=0&&index<=lastindex)
        {for(int i=index;i<=lastindex;i++)
        {
            start[i]=start[i+1];
        }
        lastindex--;
        }
        else
        cout<<"\nsomethig is wrong";
    }
    void Edit(int data,int index)
    {
            start[index]=data;
    }
    void search(int data)
    {
        for(int i=0;i<=lastindex;i++)
        {
            if(start[i]==data)
            {
                cout<<"\nya,data is in array and index is :"<<i;
                return;
            }
        }
        cout<<"\nnein,data not found";
    }
    ~Array(){
        delete []p;        
    }

};
int main(){
    Array A(10);
    A.apend(3);
    A.apend(2);
    A.apend(9);
    A.apend(12);
    A.insert(123,1);
    A.getitemps(1);
    A.DeletAt(1);
    A.Edit(6,1);
    A.view();
    A.search(12);
   // A.DeletAt(1);
   // A.DeletAt(1);
   // A.view();
return 0;
}