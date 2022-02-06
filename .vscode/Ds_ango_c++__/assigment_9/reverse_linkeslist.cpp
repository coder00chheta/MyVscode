#include<iostream>
using  namespace std;

class Reverse_LL
{
private:
   class  node
   {
       public:
       int item;
       node*next;
   };
   node* start;
public:
   Reverse_LL(){start=NULL;}
   void insertatfirst(int data)
   {
       
       node*n=new node;
       n->item=data;
       n->next=NULL;
       if(start==NULL)
       {
           start=n;
       }
       else{
           node* l=start;
           while(l->next!=NULL)
           {
               l=l->next;

           }
           l->next=n;
           
       }

   }
   void insertatlast(int data)
   {
       node*n=new node;
       n->item=data;
       if(start==NULL)
       {
           n->next=NULL;
           start=n;
       }
       else{
           n->next=start;
           start=n;
       }
   }
   void view()
   {
       node*n=start;
       int l=0;
       while(n!=NULL)
       {
           cout<<n->item<<" ";
           l++;
           n=n->next;
       }
       cout<<"\nlenth is "<<l;
   }
   void cheakeloop()
   {
       node*n=start;
       while(n->next!=start)
       {
           if(n->next==NULL)
           {
               cout<<"\nnot a loop";
               return;
           }
           n=n->next;
       }
       cout<<"\nya loop";
       return;
   }
   void removefirst()
   {
       if(start==NULL)
        cout<<"\n list is empty";
        else{
            node*n=start;
            start=start->next;
            delete n;
        }
   }

};
int main(){
    Reverse_LL a;
    
    a.insertatlast(5);
    a.insertatlast(6);
    a.insertatfirst(4);
    a.insertatfirst(3);
    a.insertatlast(7);
    a.insertatlast(8);
    a.cheakeloop();
    a.view();

return 0;
}