#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Write a program that creates a dynamic array of objects to store the details of n employees (name, employeeID, designation, and salary). The program should then sort the employees in ascending order of their salaries. Display the information of the employees after sorting.

class employees{
string name;
int employeeID;
string designation;
int salary;
public:
    employees(){
        name="";
        employeeID=0;
        designation="";
        salary=0;
    }
    void setdata(string name,int employeeID,string designation,int salary){
        this->name=name;
        this->employeeID=employeeID;
        this->designation=designation;
        this->salary=salary;
    }
void sort(employees *emp,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(emp[j].salary>emp[j+1].salary){
                employees temp=emp[j];
                emp[j]=emp[j+1];
                emp[j+1]=temp;
            }
        }
    }
}
    void print(){
        cout<<"name is "<<name<<endl;
        cout<<"employeeID is "<<employeeID<<endl;
        cout<<"designation is "<<designation<<endl;
        cout<<"salary is "<<salary<<endl;
    }
};

int main(){
    int n;
    cin>>n;
employees *emp=new employees[n];
for(int i=0;i<n;i++){
    string name;
    int employeeID;
    string designation;
    int salary;
    cin>>name>>employeeID>>designation>>salary;
    emp[i].setdata(name,employeeID,designation,salary);
}
emp[0].sort(emp,n);
for(int i=0;i<n;i++){
    emp[i].print();
}

    return 0;
}