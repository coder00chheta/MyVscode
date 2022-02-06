#include<iostream>
using  namespace std;

class stack
{
private:
   int capacity,top,*ptr;   
public:
    stack(int x){
       capacity=x;
       top=-1;
       ptr=new int[x];}
    void push(int data)
    {
        if(top==capacity-1)
            cout<<"\nstack is overflow";
        else{
            top+=1;
            ptr[top]=data;
        }
    }
    void pop()
    {
        if(top==-1)
            cout<<"\nstack is underflow";
        else{
            top-=1;
        }
    }
    void peek()
    {
        if(top==-1)
            cout<<"\nstack is empty";
        else{
        cout<<"\n\t\tdata is on "<<top<<" is :"<<ptr[top];
        if(top+1==capacity)
            cout<<"\n\t\t:now stack is fully";
        }        
    }
    ~stack(){
        delete []ptr;
    }
};
void menu(){
    cout<<"\n\t1.push\n\t2.pop\n\t3.peek\n\t4.end of the programe \n\tselect_:";
}
int main(){
    int size;
    cout<<"enter size for array:";
    cin>>size;
    stack s(size);
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