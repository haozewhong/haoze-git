#include <iostream>
#include <string>
using namespace std;

class Purchase{
    private:
    string itemName;
    int qty;
    float price, total;

    public:
    Purchase();
    Purchase(string itemName, int qty, float price);
    void set_data(string itemName, int qty, float price);
    void calculate();
    void print();
    void printTotal();

};

Purchase::Purchase(){
    itemName = "";
    qty = 0;
    price = 0.0;
    total = 0.0;
}

Purchase::Purchase(string itemName, int qty, float price){
    this->itemName = itemName;
    this->qty = qty;
    this->price = price;
    calculate();
}

void Purchase::set_data(string itemName, int qty, float price){
    this->itemName = itemName;
    this->qty = qty;
    this->price = price;
    calculate();
}

void Purchase::calculate(){
    total = price * qty;
}

void Purchase::print(){
    cout << "\n-======================" << endl;
    cout << "\t RECEIPT " << endl;
    cout << "======================" << endl;
    cout << "Name: " << itemName << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Price: RM " << price << endl;
    cout << "Payment: RM " << total << endl;
    cout << "--------------------------" << endl;
}

void Purchase::printTotal(){
    cout << "Total Payment: RM " << total << endl;
}


int main(){
    Purchase P1;
    string name;
    int qty;
    float price;
    cout << "========================" << endl;
    cout << "\t Welcome" << endl;
    cout << "========================" << endl;
    cout << "Enter item name: ";
    cin >> name;

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter price: ";
    cin >> price;

    P1.set_data(name, qty, price);
    P1.print();
    P1.printTotal();

    return 0;
}
    

