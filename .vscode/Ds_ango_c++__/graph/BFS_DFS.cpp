#include<iostream>
using  namespace std;

class graph
{
    int V,E,**ADJ;
    public:
    void create(int v,int e)
    {
        E=e;
        V=v;
        char temp;
        ADJ=new int*[v];
        for(int i=0;i<v;i++)
        {
            ADJ[i]=new int[v];
        }
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cout<<"there is direct edge bitween "<<i+1<<" and "<<j+1<<" :";
                cin>>temp;
                if(temp=='y'||temp=='Y')
                    ADJ[i][j]=1;
                else if(temp=='n'||temp=='N')
                    ADJ[i][j]=0;
                else
                {
                    cout<<"\nNot enter valid input so defalt 0 set"<<endl;
                }
            }
        }
    }
    void bfs()
    {
        cout<<"Time for BFS:";
        int *status=new int[V];
        for(int i=0;i<V;i++)
            status[i]=1;
        int Queue[V],front=-1,rear=-1;
        Queue[++rear]=1;
        ++front;
        status[0]=2;
        int x=0;
        while(front!=-1||rear!=-1)
        {
            cout<<Queue[front]<<" ";
            status[Queue[front]-1]=3;
            if(rear==front)
                rear=front=-1;
            else
                front++;
            for(int j=0;j<V;j++)
            {
                if(ADJ[x][j]==1 && status[j]==1)
                {    
                    if(front==-1)
                        front=0;
                    Queue[++rear]=j+1;
                    status[j]=2;
                }
            }
            x++;
        }
    cout<<endl;
    }
    void dfs()
    {
        cout<<"Time for DFS:";
        int *status=new int[V];
        for(int i=0;i<V;i++)
            status[i]=1;
        int stk[V],top=-1;
        stk[++top]=1;
        status[0]=2;
        int x=0;
        while(top!=-1)
        {
            cout<<stk[top]<<" ";
            status[stk[top]-1]=3;
            top--;
            for(int j=0;j<V;j++)
            {
                if(ADJ[x][j]==1 && status[j]==1)
                {    
                    stk[++top]=j+1;
                    status[j]=2;
                }
            }
            x++;
        }
    cout<<endl;
    }
    void display()
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
                cout<<ADJ[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main(){
    graph g;
    int v,e;
    cout<<"enter vertex and edge";
    cin>>v>>e;
    g.create(v,e);
    g.display();
    g.bfs();
    g.dfs();
return 0;
}