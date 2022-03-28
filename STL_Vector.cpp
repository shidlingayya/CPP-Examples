#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVector{ 1, 2, 3, 4, 5 };

    //Accessing using iterator
    for (auto it = myVector.begin(); it != myVector.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Reverse the vector using iterator
    for (auto it = myVector.rbegin(); it != myVector.rend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Accessing using constant iterator
    for (auto it = myVector.cbegin(); it != myVector.cend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Accessing using constant reverse iterator
    for (auto it = myVector.crbegin(); it != myVector.crend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //vector size
    std::cout << "vector size->" << myVector.size() << std::endl;
    std::cout << "maximum vector size->" << myVector.max_size() << std::endl;
    std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
    myVector.reserve(10); 
    std::cout << "Vector capacity changed after reserve: " << myVector.capacity() << std::endl;
    myVector.shrink_to_fit();
    std::cout << "Vector capacity changed after shrink_to_fit: " << myVector.capacity() << std::endl; //Return the memory to OS

    if (!myVector.empty())
    {
        std::cout << "Vector is not empty" << std::endl;
    }

    //Accessing elements
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << myVector.at(i) << " ";
    }
    std::cout << std::endl;

    //Accessing using []
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector front element: " << myVector.front() << " Vector back element: " << myVector.back() << std::endl;

    int* ptr = myVector.data(); //Access vector using pointer
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    //Add the element at end
    myVector.push_back(30);
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    //delete element at end
    myVector.pop_back();
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    //Insert element with emplace - Construct and insert the element
    myVector.emplace(myVector.end(), 40);
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    //Insrt element back - Construct and insert the element
    myVector.emplace_back(40);
    for (auto i = 0U; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    //Clear the vector
    myVector.clear();
    if (myVector.empty())
    {
        std::cout << "vector is empty at end" << std::endl;
    }

    return 0;
}