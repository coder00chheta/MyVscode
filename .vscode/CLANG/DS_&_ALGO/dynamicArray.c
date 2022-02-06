#include<stdio.h>
#include<stdlib.h>
struct darray
{
    int capacity;
    int lastindex;
    int *ptr;
};
struct darray* createArray(int cap)
{
    struct darray *arr;
    arr=malloc(sizeof(struct darray));
    arr->capacity=cap;
    arr->lastindex=-1;
    arr->ptr=malloc(sizeof(int)*cap);
    return(arr);
}
void doublearray(struct darray *arr)
{
    int *tem,i;
        tem=(int*)malloc(2*arr->capacity);
        for(i=0;i<=arr->capacity;i++)
            tem[i]=arr->ptr[i];
        arr->capacity*=2;
        free(arr->ptr);
        arr->ptr=tem;
}
void append(struct darray *arr,int data)
{
    
    if(arr->capacity==arr->lastindex)
    {
       doublearray(arr);
       arr->lastindex+=1;
       arr->ptr[arr->lastindex]=data;
    }
    else
    {
        arr->lastindex+=1;
        arr->ptr[arr->lastindex]=data;
    }

}
void insert(struct darray *arr,int index,int data)
{
    int i;
     if(index<0)
        printf("invalid index");
    else if(arr->lastindex==arr->capacity-1)
    {
        doublearray(arr);
        for(i=arr->lastindex;i>=index;i--)
            arr->ptr[i+1]=arr->ptr[i];
        arr->ptr[index]=data;
        arr->lastindex+=1;
    }
    else
    {
        for(i=arr->lastindex;i>=index;i--)
            arr->ptr[i+1]=arr->ptr[i];
        arr->ptr[index]=data;
        arr->lastindex+=1;
    }

    
}
int getitem(struct darray *arr,int index)
{
    if(index<0||index>arr->capacity-1)
        {printf("invalid index");
        return(-1);}
    else
    {
        return(arr->ptr[index]);
    }
}
int count(struct darray *arr)
{
    return(arr->lastindex);
}
void edititem(struct darray *arr,int index,int data)
{
    if(index<0||index>arr->capacity-1)
        printf("invalid index");
    else
    {
        arr->ptr[index]=data;
    }
}
void halfarray(struct darray *arr)
{
    int *tem,i;
    tem=malloc(arr->capacity/2);
    for(i=0;i<=arr->lastindex;i++)
       tem[i]=arr->ptr[i];
    arr->capacity/=2;
    free(arr->ptr);
    arr->ptr=tem;
    
}
void removeitem(struct darray *arr,int index)
{
    int i;
    if(index<0||index>arr->capacity-1)
        printf("invalid index");
    else
    {
        for(i=index;i<=arr->lastindex;i++)
            arr->ptr[i]=arr->ptr[i+1];
        arr->lastindex-=1;
        if(arr->lastindex=arr->capacity/2)
        {
           halfarray(arr);
        }
    }
}
void display(struct darray *arr)
{
    int i;
    for(i=0;i<=arr->lastindex;i++)
        printf("%d\n",arr->ptr[i]);
}
int main(){
    int l;
    struct darray *arr;
    arr=createArray(3);
    append(arr,5);
    append(arr,6);
    append(arr,7);
    insert(arr,3,8);
    append(arr,10);
    
    removeitem(arr,1);
    display(arr);
    return 0;
}