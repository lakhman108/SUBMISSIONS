#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class rectangle{
    int top_left_x,top_left_y,top_right_x,top_right_y,bot_left_x,bot_left_y,bot_right_x,bot_right_y;
    public:
    void initialize(int top_left_x,int top_left_y,int top_right_x,int top_right_y,int bot_left_x,int bot_left_y,int bot_right_x,int bot_right_y){
        this->top_left_x=top_left_x;
        this->top_left_y=top_left_y;
        this->top_right_x=top_right_x;
        this->top_right_y=top_right_y;
        this->bot_left_x=bot_left_x;
        this->bot_left_y=bot_left_y;
        this->bot_right_x=bot_right_x;
        this->bot_right_y=bot_right_y;
    }
    void move_left(int units){
        this->top_left_x-=units;
        this->top_right_x-=units;
        this->bot_left_x-=units;
        this->bot_right_x-=units;
        
    }
    void move_right(int units){
      this->top_left_x+=units;
        this->top_right_x+=units;
        this->bot_left_x+=units;
        this->bot_right_x+=units;
    }
     void move_up(int units){
        this->top_left_y+=units;
        this->top_right_y+=units;
        this->bot_left_y+=units;
        this->bot_right_y+=units;
    }
     void move_down(int units){
       this->top_left_y-=units;
        this->top_right_y-=units;
      this->bot_left_y-=units;
        this->bot_right_y-=units;
    }
void increase(char x, int y){
    switch (x){
        case 'L':
            top_left_x -= y;
            bot_left_x -= y;
            break;
        case 'R':
            top_right_x += y;
            bot_right_x += y;
            break;
        case 'T':
            top_left_y += y;
            top_right_y += y;
            break;
        case 'B':
            bot_left_y -= y;
            bot_right_y -= y;
            break;
    }
}

void decrease(char x, int y){
    switch (x){
        case 'L':
            top_left_x += y;
            bot_left_x += y;
            break;
        case 'R':
            top_right_x -= y;
            bot_right_x -= y;
            break;
        case 'T':
            top_left_y -= y;
            top_right_y -= y;
            break;
        case 'B':
            bot_left_y += y;
            bot_right_y += y;
            break;
    }
}

    void print()
    {
        cout<<top_left_x<<" ";
cout<<top_left_y;
cout<<endl;
cout<<top_right_x<<" ";
cout<<top_right_y;
cout<<"\n";
cout<<bot_left_x<<" ";
cout<<bot_left_y;
cout<<"\n";
cout<<bot_right_x<<" ";
cout<<bot_right_y;
    }
    
};

int main() {
     rectangle r1;
    int top_left_x,top_left_y,top_right_x,top_right_y,bot_left_x,bot_left_y,bot_right_x,bot_right_y;
cin>>top_left_x;
cin>>top_left_y;

cin>>top_right_x;
cin>>top_right_y;

cin>>bot_left_x;
cin>>bot_left_y;

cin>>bot_right_x;
cin>>bot_right_y;
r1.initialize(top_left_x,top_left_y,top_right_x,top_right_y,bot_left_x,bot_left_y,bot_right_x,bot_right_y);
int n;
cin>>n;
for(int i=0;i<n;i++)
{
     char direction;int units;
     cin>>direction;
    if(direction=='A')
    {
        char c,d;int a;
        cin>>c>>d>>a;
        switch(c)
        {
            case 'I':
                r1.increase(d,a);
                continue;
            case 'D':
                r1.decrease(d,a);
                continue;
        }
    }
         cin>>units;
     switch(direction)
     {
         case 'L':
        r1.move_left(units);
        break;
        case 'R':
        r1.move_right(units);
        break;
      case 'U':
        r1.move_up(units);
        break;
      case 'D':
        r1.move_down(units);
        break;
        
     }
}
r1.print();
    return 0;
}
