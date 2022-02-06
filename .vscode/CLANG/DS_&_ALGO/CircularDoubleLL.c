#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    int item;
    struct node* next;
};
void insertlast(struct node **start,int data)
{
    struct node *n;
    n=malloc(sizeof(struct node));
    n->item=data;
    if((*start)==NULL)
    {
        n->next=n;
        n->prev=n;
        (*start)=n;
    }
    else{
    n->next=*start;
    n->prev=(*start)->prev;
    (*start)->prev->next=n;
    (*start)->prev=n;
    }
}
void display(struct node *s)
{
    struct node *t;
    t=s;
    if(s==NULL)
        printf("list is emity");
    else{
    while(t->next!=s)
    {
        printf("%d ",t->item);
        t=t->next;
    }
    printf("%d",t->item);
    }
}
void insertfirst(struct node **s,int data)
{
    struct node* n;
    n=malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {
        *s=n;
        n->prev=*s;
        n->next=*s;
    }
    else
    {
    n->next=*s;
    n->prev=(*s)->prev;
    (*s)->prev->next=n;
    (*s)->prev=n;
    *s=n;
    }
}
void removelast(struct node **start)
{
    struct node *n;
    if(*start==NULL)
        printf("empty list!");
    else
    {
    n=*start;
    if(n->next==*start)
        *start=NULL;
    else
    {
        while(n->next!=*start)
            n=n->next;
        n->prev->next->prev=n->prev;
        n->prev->next=n->next;
    }
    free(n);
}
}
void removeFirst(struct node **start)
{
    struct node *n;
    if(*start==NULL)
        printf("nothing to delet");
    else
    {
        n=*start;
        if((*start)->next==(*start))
            *start=NULL;
        else
        {
        (*start)->prev->next=n->next;
        n->next->prev=(*start)->prev;
        *start=n->next;
        }
        free(n);
    }
}

int main(){
    struct node* start;
    start=NULL;
    insertlast(&start,3);
    insertlast(&start,12);
    insertlast(&start,9);
    insertlast(&start,7);
    insertfirst(&start,0);
    insertfirst(&start,-1);
  //  removeFirst(&start);
   //removelast(&start);
   // removelast(&start);
    //removelast(&start);
    removeFirst(&start);
   // removeFirst(&start);
    //removeFirst(&start);
    //removeFirst(&start);
    display(start);
    return 0;
}