//Aggregation Relationship in C++

#include <iostream>
#include <string>

class Techie
{
public:
    Techie(int hn, std::string st, std::string cn, std::string sn):house_no(hn), state(st), city_name(cn), street_name(sn){}
    int house_no;
    std::string state;
    std::string city_name;
    std::string street_name; 
};

class Person
{
public:
    Person(std::string p_name, Techie* addr)
    {
        name = p_name;
        address = addr;
    }

    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "House No: " << address->house_no << std::endl;
        std::cout << "State: " << address->city_name << std::endl;
        std::cout << "Street: " << address->street_name << std::endl;    
    }

private:
    std::string name;
    Techie* address;
};

int main()
{
    Techie technical_guy(131, "KARNATAKA", "BANGALORE", "SINGASANDRA");
    Person person("Ramesh", &technical_guy);
    person.display();
    return 0;
}
