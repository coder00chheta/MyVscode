#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int capacity;
    int top;
    int *ptr;
};
struct stack *createstack(int cap)
{
    struct stack *s;
    s=malloc(sizeof(struct stack));
    s->capacity=cap;
    s->top=-1;
    s->ptr=malloc(sizeof(int)*cap);
    return s;
}
void push(struct stack *s,int data)
{
    if(s->capacity-1==s->top)
        printf("overflow");
    else
    {
        s->top+=1;
        s->ptr[s->top]=data;
    }
}
void pop(struct stack *s)
{ 
    if(s->top==-1)
        printf("under flow");
    else
        s->top-=1;
}
int peek(struct stack *s)
{
    if(s->top==-1)
        printf("stack is empty");
    else
        printf("%d",s->ptr[s->top]);
}
int main(){
    struct stack *s;
    s=NULL;
    s=createstack(4);
    push(s,1);
    push(s,0);
    push(s,3);

    pop(s);
    peek(s);
    



    return 0;
}