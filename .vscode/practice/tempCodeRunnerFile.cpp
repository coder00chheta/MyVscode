#include<iostream>
using  namespace std;

int cubi(int i,int b,int a,int *out,string *sout,string *dislike,string *like)
{
    for(int p=0;p<b;p++)
            {
                for(int pl=0;pl<*out;pl++)
                {
                   
                    if(dislike[p]==sout[pl])
                    {
                        return -1;
                    }
                 
                }
            }
           
            int temp=*out+a;
            int ik=0;
            
            for(int l=*out;l<temp;l++)
            {   int st=0;
                for(;st<*out;st++)
                {
                    if(sout[st]==like[ik])
                    {  ik++;
                        break;
                    }
                } 
                if(st==(*out))
                {
                sout[(*out)++]=like[ik];
                ik++;
                }
            }
            return 0;
}
int main(){
    int c,out=0;
    string sout[50];
    cin>>c;
    int a;
    int b;
    for(int i=0;i<c;i++)
    {
        cin>>a;
        string *like=new string[a];
        for(int j=0;j<a;j++)
            cin>>like[j];
        cin>>b;
        string *dislike=NULL;
        if(b!=0)
        {
        dislike=new string[b];
        for(int j=0;j<b;j++)
            cin>>dislike[j];
        }
        if(out==0)
        {
            out=a;
            for(int l=0;l<out;l++)
                sout[l]=like[l];
            
        }
        else
        {
            cubi(i,b,a,&out,sout,dislike,like);            
        }
        delete []like;
        delete []dislike;
    }
    cout<<out<<" ";
    for(int jk=0;jk<out;jk++)
        cout<<sout[jk]<<" ";
return 0;
}