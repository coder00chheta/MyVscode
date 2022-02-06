#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int capacity;
    int front,rear;
    int *ptr;
};
struct Queue* createQueue(int cap)
{
    struct Queue *Q;
    Q=(struct Queue *)malloc(sizeof(struct Queue));
    Q->capacity=cap;
    Q->front=-1;
    Q->rear=-1;
    Q->ptr=(int*)malloc(sizeof(int)*cap);
    return Q;
}
void insetion(struct Queue *Q,int data)
{
    if((Q->rear+1==Q->capacity && Q->front==0) || Q->rear==Q->front-1)
            printf("OverFlow");
    else if(Q->rear==-1)
            {
                Q->rear=0;
                Q->front=0;
                Q->ptr[Q->rear]=data;
            }
    else if(Q->rear==Q->capacity-1)
        {
            Q->rear=0;
            Q->ptr[Q->rear]=data;
        }
    else
        Q->rear+=1;
        Q->ptr[Q->rear]=data;
}
void deletion(struct Queue *Q)
{
    if(Q->front==-1)
        printf("underflow");
    else if(Q->front==Q->rear)
       { Q->front=-1;
        Q->rear=-1;
       }
    else if(Q->front==Q->capacity-1)
        Q->front=0;
    else
     Q->front+=1;
}
void display(struct Queue *Q)
{
    int i;
    if(Q->front==-1)
        printf("list is empty");
    else
    {
    for(i=Q->front;i<=Q->rear;i++)
       { if (i>=Q->capacity)
        {
            i=0;
        }
        printf("%d",Q->ptr[i]);
       }
    }
        
}
void main()
{
    struct Queue *Q;
    Q=createQueue(10);
    insetion(Q,5);
    insetion(Q,6);
    insetion(Q,7);
    insetion(Q,8);
    deletion(Q);
    deletion(Q);
       deletion(Q);
       deletion(Q);
       insetion(Q,9);
       insetion(Q,1);
       insetion(Q,2);
       insetion(Q,3);
    display(Q);
}
