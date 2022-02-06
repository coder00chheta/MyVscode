#include<iostream>
using  namespace std;
class player
{
   public:
   int Num;
   char name[20];
   char position;
   int Total_point=0,tekal_point=0,raid_point=0,bonus_point=0;
};
class team
{
   public:
   int Total_point=0,tekal_point=0,raid_point=0;
   int p[7];
   char team_name[20];
   void declare_team()
   {
      cout<<"declare player number: "<<endl;
      for(int i=0;i<7;i++)
      {
         int x;
         cin>>x;
         p[i]=x;
      }
   }
   void in_match_player()
   {
      cout<<"currant 7 player in "<<this->team_name<<" team:"<<endl;
      for(int i=0;i<7;i++)
      {
         cout<<p[i]<<" ";
      }
      cout<<endl;
   }
};
class match
{
   private:
      int match_no;
   public:
   match()
   {
      int x,time=0;
      cout<<"enter match no.";
      cin>>match_no;
      team t1,t2;
      cout<<"enter team 1 name:";
      cin>>(t1.team_name);
      cout<<"enter team 2 name:";
      cin>>(t2.team_name);
      t1.declare_team();
      t2.declare_team();
      while(1)
      {
         system("CLS");
         cout<<"\ntime :"<<time;
         int temp,tp;
         cout<<"\n"<<t1.team_name<<" "<<t1.Total_point;
         cout<<"\n"<<t2.team_name<<" "<<t2.Total_point;
         cout<<"\nnew raid player number "<<temp;
         cout<<"\nraid end in time "<<tp;
         time+=tp;
         


      }
   }
};
int main(){
    team m,b;

return 0;
}