#include<iostream>

using std::cin;
using std::cout;
using std::endl;
// Using OOP C++ Abstract Data Type (ADT) concept, develop a class to represent
// the concept of Length(units of total inches only). Note that 12 inches = 1 foot. e.g.
// 70 inches length can be represented as 5'-10'' which is 12X5 feet=>60 and
// 60+10=>70 inches. Provide functionality: 
// - To store length in units of total inches itself. done
// - Display length in units of feet and inches accordingly. done
// - To add external total inches to length’s total inches  done
// - To add feet and inches to length’s total inches done
// - To add other length to length’s total inches done
// - main() with sample runs to test Length class with objects len1, len2.

class lengths {
    int length=0;
    public:
      lengths(){
          length=0;
       }
       void setlength(int length){
           this->length=length;
       }
       void add_feet_inch(int feet,int inches)
       {
           this->length+=feet*12+inches;
       }
       void addlength(int length){
           this->length+=length;
       }
       void Display(){
           int feet=length/12;
           int inches=length%12;
           cout<<"legth is "<<feet<<" feet and "<<inches<<" inches"<<endl;
       }

       void print(){
           cout<<"length is "<<length<<" inches"<<endl;
       }
};

int main()
{
    lengths T1;
    T1.setlength(20);
    T1.Display();
    T1.print();
    T1.add_feet_inch(5,10);
    T1.Display();
    T1.addlength(20);
    T1.print();
    T1.Display();
}