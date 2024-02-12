#include<iostream>
#include <string>

using namespace std;
int bonus_e=0,bonus_t=0,bonus_m=0;

class person
{
char x;int salary;string name;
public:
void set(char x,int salary,string name)
{
    this->name=name;
    this->salary=salary;
    this->x=x;
    if(this->x=='E')
    bonus_e+=(salary*0.25);
    if(this->x=='T')
    bonus_t+=(salary*0.28);
    if(this->x=='M')
    bonus_m+=(salary*0.3);
   // cout<<this->x<<endl;
}
void print()
{
    cout<<name<<" "<<salary<<endl;
}
void bonus()
{
    cout<<bonus_e<<" "<<bonus_t<<" "<<bonus_m<<" "<<(bonus_e+bonus_m+bonus_t)<<endl;
}
};




int main()
{int t;
 cin>>t;
   person p1[t];
    for (int i = 0; i < t; i++)
    {
        char x;int salary;string name;
    cin >> x;
       
        cin>>salary;
       
       getline(cin,name);
     p1[i].set(x,salary,name);
     p1[i].print();
    }
    p1[t-1].bonus();
    return 0;
}