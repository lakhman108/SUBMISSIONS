#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Point{
    int x,y;
    public : 
   void initialize(int x,int y){
       this->x = x;
       this->y = y;
   }
   friend class Rectangle;
};
class Rectangle{
    Point p[4];
    public:
    void getdata(){
        for(int i=0;i<4;i++)
        {
          cin>>p[i].x>>p[i].y;
        }
    }
    void move_left(int units){
        for(int i=0;i<4;i++)
        {
            p[i].x-=units;
        }
    }
    void move_right(int units){
        for(int i=0;i<4;i++)
        {
            p[i].x+=units;
        }
    }
    void move_up(int units){
        for(int i=0;i<4;i++)
        {
            p[i].y+=units;
        }
    }
    void move_down(int units){
        for(int i=0;i<4;i++)
        {
            p[i].y-=units;
        }
    }
    void increase(char x, int y){
    switch (x){
        case 'L':
           
            p[0].x-=y;
            p[2].x-=y;
            break;
        case 'R':
            p[1].x-=y;
            p[3].x-=y;
            break;
        case 'T':
          
            p[0].y+=y;
            p[1].y+=y;
            break;
        case 'B':
           
            p[2].y-=y;
            p[3].y-=y;
            break;
    }
}
 void decrease(char x, int y){
    switch (x){
        case 'L':
            p[0].x+=y;
            p[2].x+=y;
            break;
        case 'R':
            p[1].x-=y;
            p[3].x-=y;
            break;
        case 'T':
            p[1].y-=y;
            p[2].y-=y;
            break;
        case 'B':
            p[0].y+=y;
            p[3].y+=y;
            break;
    }
}   
    
    void print(){
        for(int i=0;i<4;i++)
        {
            cout<<p[i].x<<" "<<p[i].y<<endl;
        }
    }
    
};

int main() {
     Rectangle r1;
     r1.getdata();
   
  

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
