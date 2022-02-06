#include<iostream>
using  namespace std;

class DynamicArray
{
private:
   int *ptr,capacity,lastindex=-1;
public:
   DynamicArray(int x)
   {
       capacity=x;
       ptr=new int[x];
   }
   void cp()
   {
       cout<<"\n capacity="<<capacity<<"\n";
   }
   void doubleArray()
   {
       capacity*=2;
       int *temp=new int[capacity];
       for(int i=0;i<=lastindex;i++)
       {
           temp[i]=ptr[i];
       }
       delete(ptr);
       ptr=temp;
   }
   void append(int data)
   {
      if(lastindex==capacity-1) 
      {
          doubleArray();
          append(data);
      }
      else{
          lastindex++;
          ptr[lastindex]=data;
      }
   }
   void insert(int index,int data)
   {
       if(lastindex==capacity-1)
       {
           capacity*=2;
           int *temp=new int[capacity];
           for(int i=0;i<=lastindex;i++)
           {
               temp[i]=ptr[i];
           }
           delete ptr;
           ptr=temp;
           insert(index,data);
       }
      else if(index>=0&&index<=lastindex)
       {
           for(int i=lastindex;i>=index;i--)
           {
               ptr[i+1]=ptr[i];
           }
           ptr[index]=data;
           lastindex++;
       }
       else{
           cout<<"invalid index";
       }

   }
    void display()
    {
        for(int i=0;i<=lastindex;i++)
        {
            cout<<ptr[i]<<" ";
        }
        cout<<"\n";
    }
    void getitem(int index)
    {
        if(index<0&& index>lastindex)
        {
            cout<<"\ninvalid index\n";
        }
        else{
            cout<<"item at "<<index<<" :"<<ptr[index]<<"\n";
        }
    }
    void count()
    {
        cout<<"total :"<<lastindex+1<<"data avalable"<<"\n";
    }
    void edititem(int index,int data)
    {
        if(index<0&&index>lastindex)
        {
            cout<<"invalid input";
        }
        else
        {
            ptr[index]=data;
        }
    }
    void halfArray()
    {
        capacity/=2;
        int *temp=new int[capacity];
        for(int i=0;i<=lastindex;i++)
        {
            temp[i]=ptr[i];
        }
        delete ptr;
        ptr=temp;
    }
    void removeitem(int index)
    {
        if(index<0&&index>lastindex)
            cout<<"invalid index";
        else
        {
            for(int i=index;i<=lastindex;i++)
            {
                ptr[i]=ptr[i+1];
            }
            lastindex--;
            if(lastindex*2<capacity)
            {
                cp();
                halfArray();
                cp();
            }
        }
    }
    ~DynamicArray()
    {
        delete []ptr;        
    }

};
int main(){
    DynamicArray A(5);
    A.append(40);
    A.append(50);
    A.append(60);
    A.append(70);
    A.append(80);
    A.cp();
    A.append(90);
    A.cp();
    A.append(100);
    A.append(120);
    A.insert(0,10);
    A.insert(0,20);
    A.cp();
    A.insert(0,30);
    A.cp();
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
    A.removeitem(1);
  //  A.getitem(2);
    A.count();
   // A.removeitem(3);
    A.display();

return 0;
}