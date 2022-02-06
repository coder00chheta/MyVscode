#include<iostream>
using  namespace std;

class stack_LL
{
private:
   class node
   {
       public:
          int item;
          node* next;
   };
   node*start;
public:
   stack_LL(){start=NULL;}
   void push(int data)
   {
       node*n=new node;
       n->item=data;
       n->next=NULL;
       if(start==NULL)
       {
           start=n;
       }
       else{
           node*l=start;
           while(l->next!=NULL)
           {
               l=l->next;
           }
           l->next=n;
       }
   }
   void pop()
   {
       if(start==NULL)
       {
           cout<<"\nlist is empty";
       }
       else if(start->next==NULL)
       {
           node*n=start;
           start=NULL;
           delete n;
       }
       else{
           node*m=start;
           node*n=m->next;
           while(n->next!=NULL)
           {
                n=n->next;
                m=m->next;
           }
           m->next=NULL;
            delete n;
       }
   }
   void peek()
   {
       if(start==NULL)
        cout<<"\nstack is underflow";
        else
        {
            node*n=start;
            while(n->next!=NULL)
                n=n->next;
            cout<<"\npeek data is :"<<n->item;            
        }
   }
};
void menu(){
    cout<<"\n\t1.push\n\t2.pop\n\t3.peek\n\t4.end of the programe \n\tselect_:";
}
int main(){
    stack_LL s;
    int t;
    while(1)
    {
        system("CLS");
        s.peek();
        menu();
        cin>>t;
        switch (t)
        {
        case 1:
            int data;
            cout<<"\n\t\tenter the data :";
            cin>>data; 
            s.push(data);       
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            cout<<"\n\t\t\t\tbye bye";
            goto end;
        default:
            cout<<"\nroung input ";
            break;
        }
        
    }
    end:
    
return 0;
}