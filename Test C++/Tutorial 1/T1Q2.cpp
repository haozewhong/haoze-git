#include <iostream>
using namespace std;
int main(){
    double m, h, bmi;

    cout << "Get weight in kg :";
    cin >> m;
    cout << "Get height in meter : ";
    cin >> h;
    bmi = m / (h * h);
    cout << "Your BMI = " << bmi << endl;
    cout << "Your weught category is : ";
    if (bmi < 18.5){
        cout << "Underweight";
        }else if (bmi >= 18.5 && bmi <= 24.9){
            cout << "Normal weight";
        }else if (bmi >= 25 && bmi <= 29.9){
            cout << "Overweight";
        }else{
            cout << "Obesity";
        }
    
     return 0;
}