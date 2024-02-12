#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
    Person() {} 
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void print() {
            cout << age << " " << name << endl;
        }
};

class Family {
    private:
        Person members[20];
        int members_count;
    public:
        Family() {
            members_count = 0;
        }
        void add_member(string name, int age) {
            members[members_count] = Person(name, age);
            members_count++;
        }
        void print() {
            for (int i = 0; i < members_count; i++) {
                members[i].print();
            }
        }
};

int main() {
    int n;
    cin >> n;
    Family f;
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cin >> name >> age;
        f.add_member(name, age);
    }
    f.print();
    return 0;
}
