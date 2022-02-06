#include<iostream>
using  namespace std;

struct bst
{
    bst*left;
    int item;
    bst *right;
};
bst* root=NULL;
void insert(int data)
{
    bst* n=new bst;
    n->item=data;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
        root=n;
    else
    {
        bst* temp=root;
        while(1)
        {
            if(temp->item==data)
                cout<<"duplicate not added"<<endl;
            else if(data<temp->item)
            {
                if(temp->left==NULL)
                {    temp->left=n;
                    break;
                }
                temp=temp->left;                
            }
            else
            {
                if(temp->right==NULL)
                {
                    temp->right=n;
                    break;
                }
                temp=temp->right;
            }
        }
    }
}
void inorder(bst* t)
{
    if(t->left!=NULL)
        inorder(t->left);
    cout<<t->item<<endl;
    if(t->right!=NULL)
        inorder(t->right);
}
void Dlt(int data)
{
    bst *ptr=root,*parptr=NULL;
    if(root==NULL) 
        cout<<"root is empty"<<endl;
    else
    {
    while(ptr->item!=data&&ptr!=NULL)
    {
        
        if(data<ptr->item)
        {
            parptr=ptr;
            ptr=ptr->left;
        }
        else
        {
            parptr=ptr;
            ptr=ptr->right;
        }
    }
    if(ptr==NULL)
        cout<<"data not found"<<endl;
    else
    {
    if(ptr->right==NULL && ptr->left==NULL)
    {
        if(parptr==NULL)
            root=NULL;
        else if(ptr==parptr->left)
            parptr->left=NULL;
        else
            parptr->right=NULL;
        delete(ptr);
    }
    else if(ptr->left!=NULL && ptr->right!=NULL)
    {
        bst *s=ptr->right,*ps=ptr;
        while(s->left!=NULL)
        {
            ps=s;
            s=s->left;
        }
        ptr->item=s->item;
        if(s==ps->left)
            ps->left=s->right;
        else
            ps->right=s->right;
        delete(s);
    }
    else
    {
        if(parptr==NULL)
        {
            if(ptr->left!=NULL)
                root=ptr->left;
            else
                root=ptr->right;
        }
        else if(ptr==parptr->left)
        {
            if(ptr->left!=NULL)
                parptr->left=ptr->left;
            else
                parptr->left=ptr->right;
        }
        else
        {
            if(ptr->left!=NULL)
                parptr->right=ptr->left;
            else
                parptr->right=ptr->right;
        }
        delete(ptr);
    }
    }
    }
}
int main(){
    insert(10);
    insert(20);
    insert(15);
    insert(5);
    insert(7);
    insert(8);
    insert(4);
    insert(3);
    Dlt(3);
    Dlt(20);
    Dlt(7);
    inorder(root);
return 0;
}