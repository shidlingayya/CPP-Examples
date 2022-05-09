#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        std::cout << "Inside Base print class" << std::endl;
    }
};

class Derived1 :public Base
{
public:
    void print()
    {
        std::cout << "Inside Derived1 print class" << std::endl;
    }
};

class Derived2 :public Base
{
public:
    void print()
    {
        std::cout << "Inside Derived2 print class" << std::endl;
    }
};

int main()
{
    Derived1 d1;
    Base* ptr = dynamic_cast<Base*> (&d1);
    ptr->print();

    // Dynamic casting
    Derived1* dp2 = dynamic_cast<Derived1*>(ptr);
    if (dp2 == nullptr)
    {
        cout << "null" << endl;
    }
    return 0;
}