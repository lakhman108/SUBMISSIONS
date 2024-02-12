#include <iostream>

using namespace std;

class work{
    public:
    void reverse(int arr[], int size) {
    
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

void reverse(char *str){
    int size = strlen(str);
    
    for (int i = 0; i < size / 2; i++) {
      swap(str[i], str[size - i - 1]);
    }

}

};

int main(){
work w;

    int arr[5] = { 2, -4, 0, 6, -8 };
    w.reverse(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    string str="parmar lakhman";
    w.reverse(&str[0]);
    cout << str << endl;
    return 0;
}