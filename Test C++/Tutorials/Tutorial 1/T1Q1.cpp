#include <iostream>
using namespace std;
int main(){
    int x1, x2;
    int option;

    while (true){
    cout << "Simple calculator\n";
    cout << "Enter option: 1)+ 2)- 3)* 4)/ 5)mod(x1,x2) -1)Exit\nEnter your selection: ";
    cin >> option;
    if(option == -1){
        cout << "Exiting the calculator\n";
        break;
    }
    cout << "Enter your first integer:\n";
    cin >> x1;
    cout << "Enter your second integer:\n";
    cin >> x2;

    switch (option){
        case 1:
            cout << x1 << " + " << x2 << " = " << (x1+x2) << endl;
            break; 
        case 2:
            cout << x1 << " - " << x2 << " = " << (x1-x2) << endl;
            break;
        case 3:
            cout << x1 << " * " << x2 << " = " << (x1*x2) << endl;
            break;
        case 4:
            if (x2 != 0){
                cout << x1 << " / " << x2 << " = " << (x1/x2) << endl;
            }else{
                cout << "Error" << endl;
            }
            break;
        case 5:
            if (x2 != 0){
                cout << "mod(" << x1 << "," << x2 << ") = " << (x1 % x2) << endl;
            }else{
                cout << "Error" << endl;
            }
            break;
        default:
            cout << "Invalid optioon\n";
            break;
            }
    }
    cout << "Press any key to continue . . .\n";
    return 0;

    }