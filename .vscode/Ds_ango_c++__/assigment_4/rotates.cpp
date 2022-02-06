#include<iostream>
using  namespace std;

class Rotate
{
private:
   int *ptr,n;
public:
   Rotate(int x)
   {n=x;ptr=new int[n];
   for(int i=0;i<x;i++)
   {
       cout<<"\nenter "<<i<<"th data:";
       cin>>ptr[i];
   }}
   void rotate(int d,int dir)
   {
       if(dir==1)
       {
       for(int l=0;l<d;l++)
       {    int temp=ptr[n-1];
           for(int i=n-1;i>0;i--)
           {
               ptr[i]=ptr[i-1];

           }
           ptr[0]=temp;
       }
       }
       else if(dir==-1)
       {
           for(int j=0;j<d;j++)
           {    int temp=ptr[0];
               for(int k=0;k<n-1;k++)
               {
                   ptr[k]=ptr[k+1];
               }
               ptr[n-1]=temp;

           }
       }

   }
    void view()
    {cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<ptr[i]<<" ";
        }
    }
   ~Rotate(){delete []ptr;}

};
int main(){
    Rotate A(5);
    A.view();
    A.rotate(2,1);
    A.view();
    A.rotate(2,-1);
    A.rotate(3,-1);
    A.view();
    
return 0;
}