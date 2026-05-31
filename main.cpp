#include <iostream>
#include <string>
using namespace std;

// Write your MovieTicket class here

int main()
{
    MovieTicket t1("Avengers", 2, 18.50);
    MovieTicket t2("Frozen", 3, 15.00);

    cout << "Ticket 1" << endl;
    t1.calculateTotal();
    t1.print();

    cout << endl;

    cout << "Ticket 2" << endl;
    t2.calculateTotal();
    t2.print();

    return 0;
}