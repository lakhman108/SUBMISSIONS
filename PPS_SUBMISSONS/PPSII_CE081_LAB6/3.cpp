#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::swap;

// Write a program that creates a dynamic array of structures to store the details of
// n employees (name, employeeID, designation, and salary). The program should
// then sort the employees in ascending order of their salaries. Display the
// information of the employees after sorting.

struct employee{
    string name;
    int employeeId;
    string designation;
    int salary;
};
void sorted(struct employee *vtr,int n)
{
    // sort on based of salary
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(vtr[i].salary>vtr[j].salary)
        {
            swap(vtr[i].salary,vtr[j].salary);
swap(vtr[i].name,vtr[j].name);
swap(vtr[i].employeeId,vtr[j].employeeId);
swap(vtr[i].designation,vtr[j].designation);
        }
    }
}
}

int main()
{
int n;
cin>>n;
struct employee *ptr=new struct employee[n];
for(int i=0;i<n;i++)
{
    cin>>ptr[i].name>>ptr[i].employeeId>>ptr[i].designation>>ptr[i].salary;
}
sorted(ptr,n);
for(int i=0;i<n;i++)
{
    cout<<ptr[i].name<<" "<<ptr[i].employeeId<<" "<<ptr[i].designation<<" "<<ptr[i].salary<<endl;
}
    return 0;
}