#include<iostream>
using  namespace std;
class graph
{
private:
   int V,E;
   struct node
   {
       int vno;
       node* next;
   };
   node **ADJ;
   
public:
   void create(int v)
   {
       char temp;
       V=v;
       ADJ=new node*[v];                       
       ADJ[0]->next=NULL;
        
       
       for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cout<<"there is direct edge bitween "<<i+1<<" and "<<j+1<<" :";
                cin>>temp;
                if(temp=='y'||temp=='Y')
                {
                    node* t=new node;
                    t->next=NULL;
                    t->vno=j+1;
                    cout<<ADJ[i]->next;
                    if((ADJ[i])->next==NULL)
                        (ADJ[i])->next=t;
                    /*else
                    {
                        node *tr=ADJ[i];
                        while(tr->next!=NULL)
                        {    tr=tr->next;
                        cout<<"!";
                        }
                        tr->next=t;
                    }*/
                }
            }
        }
    }
    void display()
    {
        for(int i=0;i<V;i++)
        {
            node *temp=ADJ[i];
            while(temp->next!=NULL)
            {
                cout<<temp->vno<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }   
};
int main(){
    graph g;
    g.create(5);
    //g.display();
return 0;
}   