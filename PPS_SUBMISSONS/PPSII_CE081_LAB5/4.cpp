#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class shop{
    string name;float price;
    public:
    shop(string name,float price)
    {
        this->name=name;
        this->price=price*2;
    }
    void print(){
        cout<<name<<" ";
            printf("%.2f",price);
    }
};

int main() {
   string name;float price;
    cin>>name>>price;
    shop s1(name,price);
    s1.print();
    return 0;
}
