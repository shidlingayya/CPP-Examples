#include <iostream>
struct Son;
struct Mother{
    ~Mother(){
        std::cout << "Mother object gone" << std::endl;
    }
    void setKids(const std::shared_ptr<Son> s){
        mySon = s;
    }
    std::weak_ptr<Son> mySon;
};
struct Son{
    Son(std::shared_ptr<Mother> m) :myMother(m){}
    ~Son(){
        std::cout << "Son object gone" << std::endl;
    }
    std::shared_ptr<Mother> myMother;
};
int main(){  
    std::shared_ptr<Mother> mother = std::shared_ptr<Mother>(new Mother);
    std::shared_ptr<Son> son = std::shared_ptr<Son>(new Son(mother));
    mother->setKids(son);
    return 0;
}