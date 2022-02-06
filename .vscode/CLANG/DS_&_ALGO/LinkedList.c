#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *next;
};
void insertAtlast(struct node **s,int data)
{
    struct node *n,*t;
    n=malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
        *s=n;
    else
    {
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;  
    }
}
void insertAtfirst(struct node **s,int data)
{
    struct node *n;
    n=malloc(sizeof(struct node));
    n->item=data;
    n->next=*s;
    *s=n;
}
void insertafter(struct node *t,int data)
{
    struct node *n;
        n=malloc(sizeof(struct node));
        n->item=data;
        n->next=t->next;
        t->next=n;
        printf("%d  ",t->next->next->item);
}
void removefirst(struct node **s)
{
    struct node *r;
    if(*s==NULL)
        printf("noting to delete");
    else
    {
    r=*s;
    *s=r->next;
    free(r);
    }
}
void removelast(struct node **s)
{
struct node *t1,*t2;
    if(*s==NULL)
            printf("Noting to delet");
    else
    {
        t1=*s;
        t2=NULL;
        while(t1->next!=NULL)
        {    t2=t1;
             t1=t1->next;
        }
        if(t2!=NULL)
            t2->next=NULL;
        else
            *s=NULL;
        free(t1);

    }
}
void removenode(struct node **s,struct node *r)
{
    struct node *t;
    if(*s==r)
        *s=r->next;
    else
    {
    t=*s;
    while(t->next!=r)
        t=t->next;
    t->next=r->next;
    }
    free(r);
}
struct node* search(struct node *start,int data)
{
   
    while(start)
    {
        if(start->item==data)
            return start;
        start=start->next;
    }
    return NULL;
}
void display(struct node *start)
{
    while (start)
    {
        printf("%d ",start->item);
        start=start->next;
    }

}
int main(){
    struct node *start,*t;
    start=NULL;
    insertAtlast(&start,5);
    insertAtfirst(&start,4);
    insertAtfirst(&start,3);
    t=search(start,4);
    insertafter(t,34);
   // removenode(&start,t);
    display(start);
    return 0;
}