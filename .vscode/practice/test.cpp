#include<iostream>
using  namespace std;

int main(){
    int t;
    cin>>t;
    for(int te=0;te<t;te++)
    {
        int n,x,max=0,temp;
        cin>>n;
        int s[n],p[n],v[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>p[i]>>v[i];
            x=p[i]/(s[i]+1);
            temp=x*v[i];
            if(temp> max)
                max=temp;
        }
        cout<<max<<endl;
    }
return 0;
}