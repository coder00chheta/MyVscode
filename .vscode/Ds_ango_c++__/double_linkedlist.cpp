#include<iostream>
using  namespace std;

class DLL
{
private:
   class node
   {
       public:
        node *pre;
        int item;
        node *next;
   };
   node* start;
public:
   DLL(){start=NULL;}
   void insertAtfirst(int data)
   {
       node* n=new node;
       n->item=data;
       n->pre=NULL;
       if(start==NULL){
           n->next=NULL;
       }
       else
       {
           n->next=start;
       }
       start=n;
   }
   void insertAtlast(int data)
   {
       node *n=new node;
       n->item=data;
       n->next=NULL;
       if(start==NULL)
       {
           start=n;
           n->pre=NULL;
       }
       else{
           node *t=start;
           while (t->next!=NULL)
           {
               t=t->next;
           }
           t->next=n;
           n->pre=t;
       }
   }
   node* search(int l)
   {
       node*t=start;
       while (t!=NULL)
       {
           if(t->item==l)
           {
               return t;
           }
           t=t->next;
       }
       cout<<"\nroung data input";
       return 0;
   }
   void insertafter(int data,int ADDdata)
   {
       if(start==NULL)
       {
           cout<<"\nlist is empty";
       }
       else{
       node*t=search(data);
       
           if(t==0)
           {
               cout<<"\nno add data";
           }
           else
           {
               node *n=new node;
               n->item=ADDdata;
               n->pre=t;
               n->next=t->next;
               t->next->pre=n;
               t->next=n;
           }
       
       }
   }
   void removefirst()
   {
       if(start==NULL)
            cout<<"\nlist is empty";
       else if(start->next==NULL)
       {
           delete start;
           start=NULL;
       }
       else 
       {
           node*t=start;
           t->next->pre=NULL;
           start=t->next;
           delete t;
       }
   }
   void removelast()
   {
       if(start==NULL)
       {
           cout<<"list is empty";
       }
       else if(start->next==NULL)
       {
           delete start;
           start=NULL;
       }
       else{
           node*t=start;
           while (t->next!=NULL)
           {
               t=t->next;
           }
           t->pre->next=NULL;
           delete t;           
       }

   }
   void display()
   {
       cout<<"\n";
       if(start==NULL)
       {
           cout<<"nothing here ";
       }
       else{
       node*t=start;
       while(t!=NULL)
       {
           cout<<t->item<<" ";
           t=t->next;
       }
       }
   }
   void removeAfter(int data)
   {
       if(start==NULL)
            cout<<"\nLIST IS EMPTY";
        else{
            node* t=search(data);
            if(t==0)
                cout<<"roung data input";
            else if(t->next==NULL)
                cout<<"\n"<<data<<" last node so removeafter not possible ";
            else 
            {
                node*p=t->next;
                t->next=p->next;
                if(p->next!=NULL)
                    p->next->pre=t;
                delete p;
            }
        }
   }
   ~DLL(){
       while (start)
       {
           removelast();
       }
       
   }
};
int main(){
    DLL A;
    A.insertAtfirst(10);
    A.insertAtlast(30);
    A.insertAtfirst(1);
    A.insertafter(10,20);
   // A.removefirst();
    //A.removefirst();
    //A.removefirst();
    //A.removefirst();
    //A.removeAfter(30);
   // A.display();
    
    A.display();
return 0;
}