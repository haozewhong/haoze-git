#include <iostream>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denomenator;
    
    public:
        Fraction(int num = 0, int den = 1);
        Fraction add(Fraction f);
        Fraction multiply(Fraction f);
        void display();
};
    Fraction::Fraction(int num, int den){
        numerator = num;
        denomenator = den;
    }

    Fraction Fraction::add(Fraction f){
        int num = (numerator * f.denomenator) + (f.numerator * denomenator);
        int den = denomenator * f.denomenator;
        return Fraction(num, den);
    }

    Fraction Fraction::multiply(Fraction f){
        int num = numerator * f.numerator;
        int den = denomenator * f.denomenator;
        return Fraction(num, den);
    }
    void Fraction::display(){
        cout << numerator << "/" << denomenator << endl;

    }
    int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    Fraction result;
    
    cout << "f1: ";
    f1.display();
    
    cout << "f2: ";
    f2.display();
    
    cout << "f1 + f2: ";
    result = f1.add(f2);
    result.display();
    
    cout << "f1 * f2: ";
    result = f1.multiply(f2);
    result.display();

    return 0;
    }
