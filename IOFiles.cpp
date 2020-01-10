#include "iostream"
#include <fstream>

using namespace std;

class Item {
    private:
        string name;
        float price;
        int qty;
    public:
        Item();
        Item(string name, float price, int qty) : name(name), price(price), qty(qty) {};
        friend ostream& operator<< (ostream &o, Item &item);

};

ostream& operator<< (ostream &o, Item &item) { 
    o << item.name << " " << item.price << " " << item.qty << endl;
    return o;
}

int main() {
    
    int nbItems = 0;
    string name = "";
    float price = 0.0f;
    int qty = 0;
    ofstream outFile("ioex.txt");

    cout << "Nber of items ?" << endl;
    cin >> nbItems;
    
    for (int i = 0; i < nbItems; i++) {
        cout << "Item name, price and qty" << endl;
        cin >> name;
        cin >> price;
        cin >> qty;
        Item item = Item(name, price, qty);
        outFile << item;
    }
    
    outFile.close();

    return 0;
}