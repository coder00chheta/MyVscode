#include<iostream>
using  namespace std;

class SDA 
{
private:
    int capacity,top,*ptr;
    void doublestack()
    {
        capacity*=2;
        int *temp=new int[capacity];
        for(int i=0;i<=top;i++)
        {
            temp[i]=ptr[i];
        }
        delete []ptr;
        ptr=temp;
        cout<<"\nnow double:"<<capacity;
    }
    void haif()
    {
        capacity/=2;
        int *temp=new int[capacity];
        for(int i=0;i<=top;i++)
        {
            temp[i]=ptr[i];
        }
        delete []ptr;
        ptr=temp;
    
    }
public:
    SDA(int x){capacity=x;top=-1;ptr=new int[x];}
    void push(int data)
    {
        if(top+1==capacity)
        {
            doublestack();
            push(data);
        }
        else{
            top++;
            ptr[top]=data;
        }
    }
    void pop()
    {
        if(top==-1)
            cout<<"\n pop not possible stack in underflow";
        else if(top==0)
        {
            top=-1;
        }
        else{
            if(top==capacity/2)
            {
                haif();
            }
            else
            top--;
        }

    }
    void peek()
    {
        if(top==-1)
            cout<<"\nstack in underflow";
        else{
            cout<<"\t\t data on top is "<<ptr[top]<<" and index is:"<<top<<" capacity is "<<capacity;
        }
    }
};
void menu(){
    cout<<"\n\t1.push\n\t2.pop\n\t3.peek\n\t4.end of the programe \n\tselect_:";
}
int main(){
int size;
    cout<<"enter size for array:";
    cin>>size;
    SDA s(size);
    int t;
    while(1)
    {
        system("CLS");
        s.peek();
        menu();
        cin>>t;
        switch (t)
        {
        case 1:
            int data;
            cout<<"\n\t\tenter the data :";
            cin>>data; 
            s.push(data);       
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            cout<<"\n\t\t\t\tbye bye";
            goto end;
        default:
            cout<<"\nroung input ";
            break;
        }
        
    }
    end:
    
return 0;
}