#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Time{
  int hours;
  int minutes;
  int seconds;
public:
Time(){
  hours=0;
  minutes=0;
  seconds=0;
}
void settime(int hours,int minutes,int seconds)
{
  if(hours>=0&&hours<=24&&minutes<=60&&minutes>=0&&seconds>=0&&seconds<=60)
  {this->hours=hours;
  this->minutes=minutes;
  this->seconds=seconds;}
  else
  {
      cout<<"invalid time"<<endl;
  }

}
void print1(){
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
//set for 12 hour formate
string label="p.m";
void set_12hour(){
    
    if(hours>=12){
hours-=12;
label="a.m";
    }
}
void print2(){
    cout<<hours<<":"<<minutes<<":"<<seconds<<label<<endl;
}
};

int main() {
  Time t1;
  t1.settime(23,45,46);
  t1.print1();
t1.set_12hour();
t1.print2();
  return 0;
}