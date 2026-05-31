#include <iostream>
using namespace std;

int main(){
    int length;

    while (true){
        cout << "\n Enter the length of the square between 1 to 20)";
        cout << "\n <any other value to end>: ";
        cin >> length;

        if (cin.fail() || length < 1 || length > 20) {
        cout << "Ending program. Only integer values between 1 and 20 accepted." << endl;
            break;
        }

        for (int row = 0; row <length; row++){
            for (int col = 0; col < length; col++){
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}