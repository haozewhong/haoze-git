#include <iostream>
using namespace std;
int factorial(int num);

int main(){
    int x=4;
    cout << "\n Factorial of " << x << " = " << factorial(x);

    return 0;
}

int factorial(int num){
    if(num==0 || num==1)
        return 1;
    else
        return num*factorial(num-1);
}