#include<iostream>
using  namespace std;

class Queue
{
private:
   int capacity,front,rear,*ptr;
public:
    Queue(int x){capacity=x;front=-1;rear=-1;ptr=new int[x];}
    void insertion(int data)
    {
        if(rear==capacity-1 && front==0 || rear==front-1)
        {
            cout<<"\nOvreFLow__";
            cin.get();
            cin.ignore();
        }
        else if(front==-1){
            front=0;
            rear=0;
            ptr[rear]=data;
        }
        else if(rear==capacity-1)
        {
            rear=0;
            ptr[rear]=data;
        }
        else{
            rear++;
            ptr[rear]=data;
        }
    }
    void getfront()
    {
        if(front==-1)
            cout<<"\nQueue is empty";
        else
            cout<<"\nvalue at front=_"<<front<<" is :"<<ptr[front];
    }
    void getrear()
    {
        if(rear==-1)
            cout<<"\nQueue is empty";
        else
            cout<<"\nvalue at rear=_"<<rear<<" is :"<<ptr[rear];
    }
    void deletion()
    {
        if(rear==-1)
        {
            cout<<"\nQueue is empty";
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==capacity-1)
        {
            front=0;
        }
        else{
            front++;
        }
    }
};
void menu()
{
    cout<<"\n\t\t1.insertion\n\t\t2.deletion\n\t\t3.end of programme__";
}
int main(){
    cout<<"\n enter size of Queue array";
    int size;
    cin>>size;
    Queue Q(size);
    while(1)
    {
        start:
        system("CLS");
        Q.getfront();
        Q.getrear();
        menu();
        int t;
        cin.ignore();
        cin>>t;
        switch (t)
        {
        case 1:
            cout<<"\nenter data you want to insertion_";
            int data;cin>>data;
            Q.insertion(data);
            break;
        case 2:
            Q.deletion();  
            cin.get();
            cin.ignore();
            break; 
        case 3:
            cout<<"\n\t\t\t\tbye bye";
            cout<<"\n\t\t\t\tconform you go then enter 0 else 1";
            int confor;
            confor=0;
            cin>>confor;
            if(confor==1)
            {
                goto start;
            }
            goto end;
            break;
        default:
            cout<<"\nroung data input";
            break;
        }

    }
    end:
return 0;
}