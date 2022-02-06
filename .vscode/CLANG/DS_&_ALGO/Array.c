#include<stdio.h>
#include<stdlib.h>
struct ArrayADT
{
    int capacity;
    int lastindex;
    int *ptr;
};
struct ArrayADT* createArray(int cap)
{
    struct ArrayADT *arr;
    arr=malloc(sizeof(struct ArrayADT));
    arr->capacity=cap;
    arr->lastindex=-1;    
    arr->ptr=malloc(sizeof(int)*cap);
    return arr;
}
void append(struct ArrayADT *arr,int data)
{
    if(arr->lastindex==arr->capacity-1)
        printf("over flow");
    else
    {
        arr->lastindex+=1;
        arr->ptr[arr->lastindex]=data;
       
    }
}
void insert(struct ArrayADT* arr,int data,int index)
{
    int i;
    if(index<0||index>arr->lastindex+1)
        printf("\nInvalid Index");
    else if(arr->lastindex==arr->capacity-1)
        printf("\nOverflow");
    else
    {
        for(i=arr->lastindex;i>=index;i--)
            arr->ptr[i+1]=arr->ptr[i];
        arr->ptr[index]=data;
        arr->lastindex+=1;
    }
}
int getitem(struct ArrayADT*arr,int index)
{
    if(index<0||index>arr->lastindex)
       { printf("\ninvalid index");
       return -1;
       }
    else
    {
        return(arr->ptr[index]);
    }
    

}
int count(struct ArrayADT*arr)
{
    return(arr->lastindex+1);
}
void edititem(struct ArrayADT*arr,int index,int data)
{
    if(index<0||index>arr->lastindex)
        printf("\nInvalid index");
    else
        arr->ptr[index]=data;
}
void removeitem(struct ArrayADT*arr,int index)
{
    int i;
    if(index<0||index>arr->lastindex)
        printf("\ninvalid index");
    else
    {
        for(i=index;i<arr->lastindex;i++)
            arr->ptr[i]=arr->ptr[i+1];
        arr->lastindex-=1;
    }

}
int searchitem(struct ArrayADT*arr,int data)
{
    int i;
    for(i=0;i<=arr->lastindex;i++)
        if(arr->ptr[i]==data)
            return(i);
    
return(-1); 
}
void release(struct ArrayADT*arr)
{
    free(arr->ptr);
    free(arr);
}
void display(struct ArrayADT*arr)
{
    int i;
    for(i=0;i<=arr->lastindex;i++)
     printf("%d ",arr->ptr[i]);
}
void sort(struct ArrayADT*arr)
{
    int i,s,j;
    for(i=1;i<arr->lastindex;i++)
        {for(j=0;j<=arr->lastindex-1-i;j++)
            if(arr->ptr[j]<arr->ptr[j+1])
            {
                s=arr->ptr[j];
                arr->ptr[j]=arr->ptr[j+1];
                arr->ptr[j+1]=s;
            }
        }
          
}
int main()
{
    int index=3,i;
    struct ArrayADT *arr;
    arr=createArray(6);
    append(arr,6);
    append(arr,2);
    append(arr,34);
    append(arr,1);
    insert(arr,3,2);
    sort(arr);
    display(arr);
    return 0;
}

