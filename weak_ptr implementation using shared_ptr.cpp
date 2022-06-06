#include <iostream>

int main()
{  
    auto s_ptr = std::make_shared<int>(100);
    std::weak_ptr<int> w_ptr(s_ptr); //Copy of shared_ptr but no reference count 
    std::cout << "w_ptr count value: " << w_ptr.use_count() << std::endl;  //counter value 1
    std::cout << "s_ptr count value: " << s_ptr.use_count() << std::endl;  //counter value 1
    std::cout << "w_ptr expired? " << w_ptr.expired() << std::endl;

    if (std::shared_ptr<int> shared_ptr = w_ptr.lock())
    {
        std::cout << "shared_ptr: " << *shared_ptr << std::endl;
        std::cout << "shared_ptr count: " << shared_ptr.use_count() << std::endl; //now counter reached to 2
    }
    else
    {
        std::cout << "Didn't get the resource " << std::endl;
    }

    w_ptr.reset();
    if (std::shared_ptr<int> shared_ptr = w_ptr.lock()) //This will not executed
    {
        std::cout << "shared_ptr: " << *shared_ptr << std::endl;
        std::cout << "shared_ptr count: " << shared_ptr.use_count() << std::endl;
    }
    else
    {
        std::cout << "Didn't get the resource " << std::endl;
    }

    return 0;
}