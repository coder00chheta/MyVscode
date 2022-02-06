#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int capacity;
    int top;
    int *ptr;
};
struct stack* createstack(int cap)
{
    struct stack* s;
    s=malloc(sizeof(struct stack));
    s->capacity=cap;
    s->top=-1;
    s->ptr=malloc(sizeof(int)*cap);
    return s;
}
void doublest(struct stack *s)
{
    int *temp,i;
    temp=(int*)malloc(2*s->capacity);
    for(i=0;i<=s->capacity;i++)
        temp[i]=s->ptr[i];
    s->capacity*=2;
    free(s->ptr);
    s->ptr=temp;
}
void push(struct stack *s,int data)
{
    if(s->capacity-1==s->top)
       doublest(s);
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
void halfst(struct stack *s)
{
    int *temp,i;
    temp=(int*)malloc(sizeof(s->capacity/2));
        for(i=0;i<s->capacity/2;i++)
            {temp[i]=s->ptr[i];}
        s->capacity/=2;
        free(s->ptr);
        s->ptr=temp;
}
int peek(struct stack *s)
{
    if(s->top==-1)
        printf("undere fllow");
    else
    {
        printf("%d",s->ptr[s->top]);
        if(s->top==s->capacity/2)
            halfst(s);
    }

}
int main(){
     struct stack *s;
    s=NULL;
    s=createstack(3);
    push(s,1);
    push(s,0);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    //pop(s);
    pop(s);
    pop(s);
    peek(s);
    
    

    
    return 0;
}