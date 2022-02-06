#include<iostream>
using  namespace std;

class cll
{
private:
   class node{
       public:
       int item;
       node* next;
   };
   node* last;
public:
   cll(){last=NULL;}
   void insertatfirst(int data)
   {
       node* t=new node;
       t->item=data;
       if(last==NULL)
       {
           t->next=t;
           last=t;
       }
       else{
        t->next=last->next;
        last->next=t;
       } 
   }
   void insertatlast(int data){
       node *n=new node;
       n->item=data;
       if(last!=NULL)
       {
       n->next=last->next;
       last->next=n;
       last=n;
       }
       else{
           last=n;
           n->next=last;
       }
   }
   node* search(int data)
   {
       if(last==NULL)
        return 0;
        else{
            node*l=last->next;
            while(l!=last)
            {
                if(l->item==data)
                    return l;
                l=l->next;
            }
            if(l->item==data)
                    return l;
            return 0;
        }
   }
   void insertafter(int aftdata,int data)
   {
       if(search(aftdata)==(0))
       {cout<<"\ndata not found";}
       else
       {
           if(search(aftdata)==last)
           {
               insertatlast(data);
           }
           else
           {
               node*n=new node;
               node*t=search(aftdata);
               n->item=data;
               n->next=t->next;
               t->next=n;
           }
       }
   }
   void removeafter(int data)
   {
       if(last==NULL)
        cout<<"list is empty";
       else{
           node*l=search(data);
           if(l==NULL)
           {cout<<"\ndata not found";}
           else if(l==last)
           {
               cout<<"\n"<<data<<" is last element so insert after not possible";
           }
           else{
               node*p=l->next;
               l->next=p->next;
                if(p==last)
                {
                    last=l;
                }
               delete p;
           }
       }
   }
   void removefirst()
   {
       if(last==NULL)
        cout<<"\nlist is empty";
        else if(last->next==last)
        {
            node *p=last;
            delete p;
            last=NULL;
            cout<<"\n now all data clrear";
        }
        else{
            node *t=last->next;
            last->next=t->next;
            delete t;
        }
   }
   void removeatlast()
   {
       if(last==NULL)
           { cout<<"\nlist is empty";
           }
        else{
            node*t=last->next;
            while(t->next!=last)
            {
                t=t->next;
            }
            if(t==t->next)
            {
                delete last;
                cout<<"\nall is clear";
                last=NULL;
            }
            else{
            t->next=last->next;
            delete last;
            last=t;
            }
        }
   }
   void view()
   {
       if(last==NULL)
       {
           cout<<"\nlist is empty";
       }
       else{
       node*n=last->next;
       while(n!=last)
       {
           cout<<n->item<<" ";
           n=n->next;
       }
       cout<<n->item;
       }
   }
};
void menu()
{
    cout<<"\n1.insert at first\n2.insert at last\n3.insert after\n4.remove at first\n5.remove at last\n6.remove after\n7.end of programme\n\t\t";
}
int main(){
    cll a;
    int t,data;
    while(1)
    {
    system("CLS");
    a.view();
    menu();
    cin>>t;
    switch (t)
    {
    case 1:
        cout<<"\n enter data";
        cin>>data;
        a.insertatfirst(data);
        break;
    case 2:
        cout<<"\n enter data";
        cin>>data;
        a.insertatlast(data);
        break;
    case 3:
        cout<<"\n enter for refrense data to";
        int refdata;
        cin>>refdata;
        cout<<"\n enter for data";
        cin>>data;
        a.insertafter(refdata,data);
        break;
    case 4:
        a.removefirst();
        break;
    case 5:
        a.removeatlast();
        break;
    case 6:
        cout<<"\nenter data";
        cin>>data;
        a.removeafter(data);
        break;
    case 7:
        cout<<"\ngood bye";
        goto k;
    default:
        cout<<"\ninvalid input";
        break;
    }
    }
    k:
return 0;
}