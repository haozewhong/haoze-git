#include <iostream>
using namespace std;

void displayVector(float *a_array, int numElem);
void getInputIntoVector(float *a_array, int numElem);

int main(){

    int num;
    cout << "Enter how many numbers to enter >> ";
    cin >> num;

    float *arrayNum = new float[num];
    getInputIntoVector(arrayNum, num);
    cout << "Number of elements in array = " << num;
    displayVector(arrayNum, num);
    delete[] arrayNum;
    return 0;
}

void getInputIntoVector(float *a_array, int numElem){
    for (int i=0; i<numElem; i++){
        cout << "Enter element A[" << (i) << "] = ";
        cin >> a_array[i];
    }
}

void displayVector(float *a_array, int numElem){
    cout << "\nDisplay data in array\n";
    for (int i=0; i<numElem; i++){
        cout << a_array[i] << "\t";
    }
}