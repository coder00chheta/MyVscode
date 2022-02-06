#include<iostream>
using  namespace std;

int main(){
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
    {
    int x1,x2;
    cin>>x1>>x2;
            if(x1==x2)
            {
                cout<<"yes"<<endl;
                break;
            }
            else if(x1<x2)
               { cout<<"no"<<endl;
                break;
               }
            else
            {
                if((x1%2)==(x2%2))
                {cout<<"yes"<<endl;
                break;}
                else
                { cout<<"no"<<endl;
                break;
               }
                
            }
        
}
return 0;
}