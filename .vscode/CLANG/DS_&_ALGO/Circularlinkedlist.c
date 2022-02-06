#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *next;
};
void insertATfirst(struct node **last,int data)
{
    struct node *n;
    n=malloc(sizeof(struct node));
    n->item=data;
    
    if((*last)==NULL)
    {
        (*last)=n;
        n->next=n;
    }
    else
    {
    n->next=(*last)->next;
    (*last)->next=n;
    }
}
void insertatlast(struct node **last,int data)
{
    struct node *n;
    n=malloc(sizeof(struct node));
    n->item=data;
    if(*last!=NULL)
    {
    n->next=(*last)->next;
    (*last)->next=n;
    (*last)=n;
    }
    else{
        (*last)=n;
        n->next=n;
    }
}
void display(struct node *last)
{
    struct node *t;
    t=last->next;
    while (t!=last)
    {
        printf("%d ",t->item);
        t=t->next;
    }
    if(t==last)
    {
        printf("%d ",last->item);
    }  
}
struct node* search(struct node *last,int data)
{
    struct node *t;
    t=last->next;
    while(t!=last)
    {
        if (t->item==data)
            return t;
        
        t=t->next;
    }
}
void insertafter(struct node *t,int data)
{
    struct node *n;
    n=malloc(sizeof(struct node));
    n->item=data;
    n->next=t->next;
    t->next=n;

}
void deletefirst(struct node **last)
{
    struct node *n;
    if((*last)==NULL)
        printf("Nothing to remove");
    else
    {
    n=(*last)->next;
    (*last)->next=n->next;
    free(n);
    }
}
void removelast(struct node **n)
{
    struct node *t1,*t2;
    t2=(*n);
    t1=t2->next;
    if(*n==NULL)
       printf("Nothing to remove");
    else{
    while(t1->next!=(*n))
    {
        t1=t1->next;
    }
    t1->next=t2->next;
    *n=t1;
    free(t2);
    }
    
}
void removeAT(struct node **last,struct node *t)
{
    struct node *a;
    a=(*last)->next;
    while(a->next!=t)
       a=a->next;
    a->next=t->next;
    free(t);

}
int main(){
    struct node *last;
    struct node *t;
    last=NULL;
    insertATfirst(&last,1);
    insertATfirst(&last,8);
    insertatlast(&last,4);
    insertatlast(&last,9);
    t=search(last,4);
   // insertafter(t,3);
    //deletefirst(&last);
    //removelast(&last);
    removeAT(&last,t);
    display(last);
    return 0;
}