#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> myArray{ 1, 2, 3, 4, 5 };

    //Accessing using iterator
    for (auto it = myArray.begin(); it != myArray.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Accessing using iterator reverse order
    for (auto it = myArray.rbegin(); it != myArray.rend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Accessing using constant iterators
    for (auto it = myArray.cbegin(); it != myArray.cend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Accessing using constant reverse iterators
    for (auto it = myArray.crbegin(); it != myArray.crend(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Size of Array: " << myArray.size() << std::endl;

    //Check if array is empty
    if (!myArray.empty())
    {
        std::cout << "Array is not empty" << std::endl;
    }

    myArray.fill(10); //Initialize all array elements to 10
    for (auto it = myArray.begin(); it != myArray.end(); it++)
    {
        std::cout << *it << " ";
    }

    //Access using [] operator which is overloaded
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    for (auto it = myArray.begin(); it != myArray.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Front Element: " << myArray.front() << "Back element: " << myArray.back() << std::endl;

    //Access the array pointer
    int* ptr = myArray.data();
    for (auto i = 0U; i < 5; i++)
    {
        std::cout << "ptr[" << i << "]:" << ptr[i] << " ";
    }
    std::cout << std::endl;

    //Using at member function
    for (auto i = 0;i<myArray.size();i++)
    {
        std::cout << myArray.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}