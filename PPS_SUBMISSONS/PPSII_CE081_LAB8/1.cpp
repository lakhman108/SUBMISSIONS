#include<iostream>
#include<string>
#include<map>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;

class Item{
    public:
    int price;
    string name;
Item(){
    name = "";
    price = 0;
}
Item(string name,int price){
    this->name = name;
    this->price = price;
}
};
class ShoppingCart{
    public:
    int total;
ShoppingCart(){
    total = 0;
}
void add_item(Item item,int quantity){
    total += item.price * quantity;
}
int calculate_bill(){
    return total;
}
void print(){
    map<string,int> m;
    for(int k=0;k<10;k++){
        m[items[k].name]+=items[k].quantity;
    }

for(auto &i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

}};
int main() {
    
    Item items[10];
    int input_items_count, price;
    string name;
    cin >> input_items_count;
    for(int i = 0; i < input_items_count; i++) {
        getchar();
        cin >> name >> price;
        items[i] = Item(name, price);
    }

    ShoppingCart sc;
    int purchase_entries, quantity;
    cin >> purchase_entries;
    for(int i = 0; i < purchase_entries; i++) {
        getchar();
        cin >> name >> quantity;
        int j;
        for(j = 0; j < input_items_count; j++) {
            if(items[j].name == name)
                break;
        }
        sc.add_item(items[j], quantity);
    }

    cout << sc.calculate_bill()<<endl;
    sc.print();

    return 0;
}