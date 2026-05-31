#include <string>
#include <iostream>
using namespace std;
 
class Animal
{
 
protected:
    string name;
 
public:
    Animal()
    {
        name = "Unknown";
    }
   
    virtual void speak()
    {
        cout << "\n ??? ";
        cout << "\n The name : " << name;
    }
};

class Dog : public Animal
{
 
public:
    Dog(string a_name)
    {
        name = a_name;
    }
    void speak()
    {
        cout << "\n Woof " << name;
    }
};

class Cat : public Animal
{
 
public:
    Cat(string a_name)
    {
        name = a_name;
    }
    void speak()
    {
        cout << "\n Meow " << name;
    }
};
 
int main()
{
    cout << "\n Hello";
    Animal *pAnimal;
 
    pAnimal = new Dog("Buddy");
    pAnimal->speak(); 
    pAnimal = new Cat("Kitty");
    pAnimal->speak();  
    delete pAnimal;
 
    return 0;
}