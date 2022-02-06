#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node* prev;
    struct node* next;    
};
void insertAtlast(struct node **s,int data)
{
    struct node *t,*n;
    t=malloc(sizeof(struct node));
    t->item=data;
    t->next=NULL;
    if(*s==NULL)
        {*s=t;
       t->prev=NULL;
        }
    else
    {
        n=*s;
        while (n->next!=NULL)
            n=n->next;
        n->next=t;
        t->prev=n;
    }
}
void insertAtfirst(struct node **s,int data)
{
    struct node *t;
    t=malloc(sizeof(struct node));
    t->item=data;
    t->prev=NULL;
    t->next=*s;
    
    if(*s!=NULL)
        (*s)->prev=t;
    *s=t;
}
void display(struct node *s)
{
    while(s)
    {
        printf("%d ",s->item);
        s=s->next;
    }
}
void insertAfter(struct node *r,int data)
{
    struct node *n;
    n=malloc(sizeof(struct node));
    n->item=data;
    n->prev=r;
    n->next=r->next;
    r->next->prev=n;
    r->next=n;
}
struct node* search(struct node *s,int data)
{
    while(s)
    {
        if(s->item==data)
            return(s);
        s=s->next;
    }
    return(NULL); 
} 
void removelast(struct node **s)
{
    struct node *t;
    t=*s;
    if(*s!=NULL)
    {
        if((*s)->next==NULL)
        {
            free(*s);
            *s=NULL;
        }
        else
        {
            while(t->next!=NULL)
                t=t->next;
            t->prev->next=NULL;
            free(t);
        }
    }
}
void removefirst(struct node **s)
{
    struct node *r;
    if(*s!=NULL)
    {
        r=*s;
    if(r->next==NULL)
        r->prev=NULL;
    *s=(*s)->next;
    free(r);
    }
}
void removenode(struct node **s,struct node *r)
{
    r->next->prev=r->prev;
    r->prev->next=r->next;
    free(r);

}

int main()
{
  struct node *start,*t;
  start=NULL;
  insertAtlast(&start,3);
  insertAtfirst(&start,2);
  insertAtlast(&start,4);
  t=search(start,2);
  insertAfter(t,1);
  //removelast(&start);
  //removefirst(&start);
  removenode(&start,t);
 
    display(start);
}