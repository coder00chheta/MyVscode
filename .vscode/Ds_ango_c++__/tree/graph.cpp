#include<iostream>
using  namespace std;

class graph
{
private:
   
       int v;
       int e;
       int** adj;
public:
   graph(int x,int y){
       v=x;
       e=y;
       adj=new int*[v];
       for(int i=0;i<v;i++)
       {
           adj[i]=new int[v];
       }
   }
   void creategraph()
   {
       int c;
       for(int i=0;i<v;i++)
       {
           for(int j=0;j<v;j++)
           {
               cout<<"\nconection between v"<<i+1<<" and v"<<j+1<<" yes or no:_";
               cin>>c;
               if(c==1)
               {
               adj[i][j]=1;
               }
               else
                adj[i][j]=0;
           }

       }
   }
   void print()
   {
       for(int i=0;i<v;i++)
       {
           for(int j=0;j<v;j++)
                {cout<<adj[i][j]<<" ";}
            cout<<"\n";
       }
   }
};
int main(){
    graph g(5,6);
    g.creategraph();
    g.print();

return 0;
}