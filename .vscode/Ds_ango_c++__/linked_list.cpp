#include<iostream>
using  namespace std;
class node
   {
       public:
       int item;
       node* next; 
   };
class List
{  
private:
    
   node* start;
public:

    List(){start=NULL;}
    void insertfirst(int data)
    {
        node *n=new node;
        n->item=data;
        n->next=start;
        start=n;
    }
    void show()
    {
        if(start==NULL)
        {
            cout<<"\nno data are available";
        }
        else{
            node *n=start;
            cout<<"\n";
            while(n)
            {
                cout<<n->item<<" ";
                n=n->next;
            }
          
        }
    }
    void insertatlast(int data)
    {
        node*n=new node;
        n->item=data;
        n->next=NULL;
        if(start==NULL)
        {
            start=n;
        }
        else
        {
            node *t=start;
            while(t->next!=NULL)
            {
                t=t->next;          
            }
           t->next=n;
        }
    }
    void insertAter(node *t,int data)
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }
    node * sreach(int data)
    {
        node *t=start;
        while (t->item!=data)
        {
            if(t==NULL)
            {
                return(NULL);
            }
            t=t->next;
        }
        return(t);
        
    }
    void Deletfirst()
    {
        if(start==NULL)
        {
            cout<<"\nlist is empty";
        }
        else{
        node *p=start;
        start=p->next;
        delete p;
        }
    }
    void deletAfter(node *p)
    {
        if(p->next==NULL)
        {
            cout<<"last element of list";
        }
        else{
        node *n=p->next;
        p->next=n->next;
        delete n;
        }
    }
    ~List()
        {while (start)
        {
            Deletfirst();
        }
        }   
};
int main(){
    List l1;
    l1.insertfirst(34);
    l1.insertfirst(33);
    l1.insertfirst(32);
    l1.insertfirst(31);
    l1.insertatlast(35);
    node*p=l1.sreach(33);
    l1.insertAter(p,112);
    p=l1.sreach(35);
    //l1.insertAter(p,101);
    l1.show();
    l1.Deletfirst();
    l1.Deletfirst();
    l1.deletAfter(p);
    l1.show();
return 0;
}