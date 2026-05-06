#include <iostream>
using namespace std;

class Temperature{
    private:
    double tempCel, tempFar;

    public:
    Temperature();
    Temperature(char unit, double temp);
    double getCels();
    double getFar();
    void equal(Temperature t);

};

Temperature::Temperature(){
    tempCel = 0.0;
    tempFar = 32.0;
}

Temperature::Temperature(char unit, double temp){
    if (unit == 'C'){
        tempCel = temp;
        tempFar = (temp * 9.0/5.0) + 32.0;
    }
    else if(unit == 'F'){
        tempFar = temp;
        tempCel = (temp - 32.0) * 5.0/9.0;
    }
    else{
        tempCel = 0.0;
        tempFar = 32.0;
    }
}

double Temperature::getCels(){
    return tempCel;
}

double Temperature::getFar(){
    return tempFar;
}

void Temperature::equal(Temperature t){
    tempCel = t.getCels();
    tempFar = t.getFar();
}

int main(){
    Temperature t1('C',100),t2('F',100);

	cout<<"t1 = "<<t1.getCels()<<" C\n";
	cout<<"t1 = "<<t1.getFar()<<" F\n";

	cout<<"t2 = "<<t2.getCels()<<" C\n";
	cout<<"t2 = "<<t2.getFar()<<" F\n";

	t1.equal(t2);   
	cout<<"After assigning t2 to t1"<<endl;

	cout<<"t1 = "<<t1.getCels()<<" C\n";
	cout<<"t1 = "<<t1.getFar()<<" F\n";
	return 0;

}