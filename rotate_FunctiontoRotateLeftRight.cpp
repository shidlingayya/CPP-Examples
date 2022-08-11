#include <iostream> 
#include <vector>
#include <algorithm>

int main()
{ 
    std::vector<int> myInts{ 1, 2, 3, 4, 5, 6, 7};
    std::cout << "Original Array: " << std::endl;
    for (auto x : myInts)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Rotate Array by 3 times left" << std::endl;
    std::rotate(myInts.begin(), myInts.begin() + 3, myInts.end());
    for (auto x : myInts)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Rotate Array by 3 times right" << std::endl;
    std::rotate(myInts.begin(), myInts.begin() + myInts.size()-3, myInts.end());
    for (auto x : myInts)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}