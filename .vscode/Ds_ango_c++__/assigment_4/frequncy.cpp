#include<iostream>
using  namespace std;

class fre
{
private:
   int *ptr,n;
public:
   fre(int size)
   {
       ptr=new int[size];
       n=size;
       for(int i=0;i<n;i++)
       {
           cout<<"enter "<<i<<"th element ";
           cin>>ptr[i];
       }
   }
   void enlaysis()
   {int max;
       for(int j=0;j<n;j++)
       {
           for(int i=0;i<n-j-1;i++)
           {
               if(ptr[i]>ptr[i+1])
               {
                   max=ptr[i];
                   ptr[i]=ptr[i+1];
                   ptr[i+1]=max;

               }
           }
       }int count=0;
       for(int i=0;i<n;i++)
       {
           if(ptr[i]!=ptr[i+1])
           {
               cout<<"\n"<<ptr[i]<<" fre is :"<<count+1;
               count=0;
           }
           else
           {
               count++;
           }
       }
   }
   ~fre()
   {
       delete []ptr;
   }
};
int main(){
    fre A(10);
    A.enlaysis();
return 0;
}