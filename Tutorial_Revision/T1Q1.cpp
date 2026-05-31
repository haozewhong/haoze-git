#include <iostream>
using namespace std;

int main(){
    int x1, x2;
    int option;

    cout<<"Simple Calculator" <<endl;
    cout<<"Enter option: 1)+ 2)- 3)* 4)/ 5) mmod(x1,x2) -1) Exit"<<endl;
    cout<<"Your selection: ";
    cin>>option;
    if(option == -1){
        return 0;
    }
    cout<<"Enter first number: "<<endl;
    cin>>x1;
    cout<<"Enter second number: "<<endl;
    cin>>x2;
    switch(option){
        case 1:
            cout<<x1<<" + "<<x2<<" = "<<(x1+x2)<<endl;
            break;
        case 2:
            cout<<x1<<" - "<<x2<<" = "<<(x1-x2)<<endl;
            break;
        case 3:
            cout<<x1<<" * "<<x2<<" = "<<(x1*x2)<<endl;
            break;
        case 4:
            if(x2 != 0){
                cout<<x1<<" / "<<x2<<" = "<<(x1/x2)<<endl;
            }else{
                cout<<"Error"<<endl;
            }
            break;
        case 5:
            if(x2 != 0){
                cout<<"mod("<<x1<<","<<x2<<") = "<<(x1%x2)<<endl;
            }else{
                cout<<"Error"<<endl;    

            }
            break;
        default:
            cout<<"Invalid option"<<endl;
            break;
    }

    cout<<"Press any key to continue . . ."<<endl;
    return 0;
}