#include <iostream>
using namespace std;
void drawBox(int w);
void drawFullLine(int w);
void drawEmptyLine(int w);

int main(){
    int width;
    while (true){
    cout<<"\n Enter the side of the square box between 1 to 20";
    cout<<"\n <any other value to end>: ";
    cin>>width;
    
    if (cin.fail() || width < 1 || width > 20) {
        cout << "Ending program. Only integer values between 1 and 20 accepted." << endl;
        break;
    }

    drawBox(width);
    cout << "\n";
    }

    return 0;
}

void drawBox(int w){
    if (w==1){
        cout<<"*";
    }
    else{
        drawFullLine(w);
        for (int i=0; i<w-2; i++){
            drawEmptyLine(w);
        }
        drawFullLine(w);
    }
}

void drawFullLine(int w){
    for (int i=0; i<w; i++){
        cout<<"* ";
    }
    cout<<endl;
}

void drawEmptyLine(int w){
    cout<<"* ";
    for (int i=0; i<w-2; i++){
        cout<<"  ";
    }
    cout<<"*"<<endl;
}