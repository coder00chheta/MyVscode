#include<iostream>
using  namespace std;

class CDLL
{
private:
   class node
   {
       public:
        node* pre;
        int item;
        node* next;
   };
   node* start;
public:
    CDLL(){start=NULL;}
    void insertatfirst(int data)
   {
       node*n=new node;
       n->item=data;
       if(start==NULL)
       {n->pre=n;
       n->next=n;
       start=n;}
       else{
           n->next=start;
           n->pre=start->pre;
           start->pre->next=n;
           start->pre=n;
           start=n;
       }
   }
    void insertatlast(int data)
    {
        node* n=new node;
        n->item=data;
        if(start==NULL)
        {
            n->pre=n;
            n->next=n;
            start=n;
        }
        else{
            n->pre=start->pre;
            n->next=start;
            start->pre->next=n;
            start->pre=n;
        }
        
    }
    node* search(int data)
    {
        node* n=start;
        while(n!=start->pre)
        {
            if(n->item==data)
            {return n;}
            n=n->next;
        }
        if(n->item==data)
            {return n;}
        return 0;
    }
    void insertafter(int afterdata,int data)
    {
        if(start==NULL)
        cout<<"\nlist is empty";
        else{
            node* l=search(afterdata);
            if(l==0)
                cout<<"\nroung data input";
            else if(start->pre==l)
            {
                insertatlast(data);
            }
            else
            {
                node*n=new node;
                n->item=data;
                n->pre=l;
                n->next=l->next;
                l->next->pre=n;
                l->next=n;
            }
        }
    }
    void removefirst()
    {
        if(start==NULL)
        {cout<<"\nlist is empty";}
        else if(start==start->next)
        {
            delete start;
            start=NULL;
            cout<<"\nnow all are clear";
        }
        else
        {
            node* l=start;
            start->pre->next=start->next;
            start->next->pre=start->pre;
            start=l->next;
            delete l;
        }
    }
    void removelast()
    {
        if(start==NULL)
            cout<<"\nlist is empty";
        else if(start==start->next)
        {
            delete start;
            start=NULL;
            cout<<"\nall are clear";
        }
        else{
            node *n=start->pre;
            start->pre=n->pre;
            n->pre->next=start;
            delete n;
        }
    }
    void removeafter(int data)
    {
        if(start==NULL)
        {
            cout<<"\nlist is empty";
        }
        else if(start==start->next)
        {
            delete start;
            start=NULL;
            cout<<"\nall are clear";
        }
        else 
        {
            node*l=search(data);
            if(l==0)
            {
                cout<<"\ndata not found";
            }
            else if(l==start)
            {
                removefirst();
            }
            else if(l==start->pre)
                removelast();
            else{
                node*n=l->next;
                l->next=n->next;
                n->next->pre=l;
                delete n;
            }
        }
    }
    void view()
   {
       node* n=start;
       while(n->next!=start)
       {
           cout<<n->item<<" ";
           n=n->next;
       }
       cout<<n->item<<" ";
   }
    ~CDLL(){
        while(start==NULL)
        {removefirst();}
    }
};
int main(){
    CDLL A;
    A.insertatfirst(14);
    A.insertatfirst(13);
    A.insertatfirst(12);
    A.insertatlast(15);
    A.insertafter(15,16);
    A.removefirst();
    A.removelast();
    A.removeafter(14);
   // A.removeafter(13);
    //A.removeafter(13);
    A.view();    
return 0;
}