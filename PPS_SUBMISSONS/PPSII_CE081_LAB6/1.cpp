#include <iostream>
using namespace std;

// Define custom manipulators
ostream& pos_num(ostream& out) {
    out << "Positive Number";
    return out;
}

ostream& neg_num(ostream& out) {
    out << "Negative Number";
    return out;
}

int main() {
    int arr[5] = { 2, -4, 0, 6, -8 }; // Initialize array
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " - ";
            cout << pos_num << endl;
        }
        else if (arr[i] < 0) {
            cout << arr[i] << " - ";
            cout << neg_num << endl;
        }
        else {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
