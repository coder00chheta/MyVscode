#include<iostream>
using  namespace std;

class tree
{
private:
   class node
   {
       public:
            node*left;
            int item;
            node*reight;
   };
   node* root;
public:
   tree(){root=NULL;}
    void postorder()
   {
      if(root!=NULL)
       {
           node*s=root;
          while(1){ 
              if(s->left!=NULL)
              {
                  while(1)
                  {
                      s=s->left;
                      if(s->left==NULL)
                        {cout<<s->item;
                        break;}

                  }
              }
       }
   }
   void preorder()
   {
       if(root!=NULL)
       {
           node*s=root;
          while(1){ 
           if(s->left==NULL)
           {
               break;
           }
           cout<<s->item<<" ";
           s=s->left;
          }
          s=root;
          while(1){ 
           if(s->reight==NULL)
           {
               break;
           }
           s=s->reight;
          }
       }
   }
   void inorder()
   {
       
       if(root!=NULL)
       {
           node*s=root;
          while(1){
             
           if(s->left==NULL)
           {
               break;
           }
           s=s->left;

          cout<<s->item<<" ";
          s=root;
          while(1){ 
           if(s->reight==NULL)
           {
               break;
           }
           s=s->reight;
          }
       }
   }
   void insertion(int data)
   {
       node*n=new node;
       n->item=data;
       n->reight=NULL;
       n->left=NULL;
       if(root!=NULL)
       {
       node*t=root;
       while(1)
       {
           if(t->item==data){
            cout<<"\nduplicate data";
            delete n;
            break;
           }
           else if(t->item<data)
           {
               if(t->reight==NULL)
               {
                   t->reight=n;
                   break;
               }
               t=t->reight;
           }
           else
           {
               if(t->left==NULL)
               {
                   t->left=n;
                   break;
               }
                t=t->left;
           }
       }   
       }
       else{
           root=n;
       }
       }
};
int main(){
    tree t1;
    while(1)
    {
        system("CLS");
        cout<<"\npreorder";t1.preorder();
        cout<<"\ninoreder";t1.inorder();
        cout<<"\npostorder";t1.postorder();
        cout<<"\n\t\t1.insertion\n\t\t2.postorder\n\t\t3.end of programme__";
        int t;

        cin>>t;
        switch (t)
        {
        case 1:
            int data;
            cout<<"\nenter data:";
            cin>>data;
            t1.insertion(data);
            break;
        case 2:
            break;
        case 3:
            goto end;
            break;
        default:
            cout<<"\ninvalid input";
            cin.get();
            cin.ignore();
            break;
        }
    }
    end:
return 0;
}   