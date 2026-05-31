#include <iostream>
using namespace std;
int main(){
    int firstint;
    int secondint;
    int sum, difference, product, quotient;
    cout << "Enter the first integer: ";
    cin >> firstint;
    cout << "Enter the second integer: ";
    cin >> secondint;
    cout<<"You have entered "<<firstint<<" "<<secondint<<endl;
    sum = firstint + secondint;
    difference = firstint - secondint;
    product = firstint * secondint;
    quotient = firstint / secondint;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    return 0;
}