#include <iostream>
#include <list>
using namespace std;

struct is_odd 
{
    bool operator() (const int& value) { return (value % 2) == 1; }
};

int main()
{
    std::list<int> myList{ 1, 2, 3, 4, 5, 6 };

    cout << "Forward Iterator" << endl;
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Forward constant iterator" << endl;
    //Access forward side with constant iterator
    for (auto it = myList.cbegin(); it != myList.cend(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse the list" << endl;
    for (auto it = myList.rbegin(); it != myList.rend(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse the list with constant iterator" << endl;
    for (auto it = myList.crbegin(); it != myList.crend(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Check if list is empty?" << endl;
    if (!myList.empty())
    {
        cout << "List is not empty" << endl;
        cout << "Current is size of list: " << myList.size() << endl;
        cout << "Max size of list: " << myList.max_size() << endl;
    }
    cout << "Front Element:" << myList.front() << endl;
    cout << "Last Element:" << myList.back() << endl;

    cout << "Reset the list to 200 in all nodes" << endl;
    myList.assign(6, 200);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Insert 200 at front" << endl;
    myList.push_front(200);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Insert 600 at Back" << endl;
    myList.push_back(600);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Insert 300 at front using emplace" << endl;
    myList.emplace_front(300);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Insert 400 at back using emplace" << endl;
    myList.emplace_back(400);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Erase front element" << endl;
    auto it = myList.begin();
    myList.erase(it);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Remove the 200 from list" << endl;
    myList.remove(200); //All occurances of 200 will be erased
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    myList.push_front(333);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Remove all odd elements from list" << endl;
    myList.remove_if(is_odd());
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    myList.push_front(200);
    myList.push_front(200);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Remove duplicate elements" << endl;
    myList.unique();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Sort list" << endl;
    myList.sort();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse the list" << endl;
    myList.reverse();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    return 0;
}