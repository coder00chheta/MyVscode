#include<iostream>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char *s=new char[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        int last=n-1,count=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[last])
                count++;
            cout<<s[i]<<s[last]<<count<<endl;
            last--;
        }
        if(count<=k)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
return 0;
}