#include <iostream>

//Cyclic dependency problem in Shared_ptr
struct Son;
struct Daughter;

struct Mother
{
public:
    ~Mother()
    {
        std::cout << "Mother object gone" << std::endl;
    }
    void setSon(const std::shared_ptr<Son> s)
    {
        mySon = s;
    }

    void setDaughter(const std::shared_ptr<Daughter> d)
    {
        myDaugheter = d;
    }
private:
    std::shared_ptr<Son> mySon;
    std::shared_ptr<Daughter> myDaugheter;

};

struct Son
{
public:
    Son(std::shared_ptr<Mother> m) :myMother(m){}
    ~Son(){
        std::cout << "Son object gone" << std::endl;
    }
private:
    std::shared_ptr<Mother> myMother;
};

struct Daughter
{
public:
    Daughter(std::shared_ptr<Mother> m) :myMother(m){}
    ~Daughter()
    {
        std::cout << "Daughter object gone" << std::endl;
    }
private:
    std::shared_ptr<Mother> myMother;
};

int main()
{  
    std::shared_ptr<Mother> mother = std::shared_ptr<Mother>(new Mother);
    std::shared_ptr<Son> son = std::shared_ptr<Son>(new Son(mother));
    std::shared_ptr<Daughter> daughter = std::shared_ptr<Daughter>(new Daughter(mother));
    mother->setSon(son);
    mother->setDaughter(daughter);
    return 0;
}