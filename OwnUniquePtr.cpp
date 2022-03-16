#include <iostream>

template<class T>
class unique_ptr
{
private:
    T* ptr = nullptr;
public:
    explicit unique_ptr(T* ptr = nullptr) {
        this->ptr = ptr;
    }

    T& operator *(){
        return *ptr;
    }

    T& operator->(){
        return ptr;
    }

    ~unique_ptr(){
        if (ptr)
        {
            delete ptr;
            ptr = nullptr;
        }
    }
};

int main()
{
    unique_ptr<int> ptr1(new int);
    unique_ptr<int> ptr2(new int);

    *ptr1 = 10;
    *ptr2 = 20;
   
    std::cout << "*ptr1: " << *ptr1 << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;

    return 0;
}
