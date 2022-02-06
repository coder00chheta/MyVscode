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
return 0;
}