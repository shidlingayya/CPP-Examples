#include <iostream>
using namespace std;

int fun(int* ptr)
{
    *ptr = *ptr + 10;
    return (*ptr);
}

int main(void)
{
    const int val = 10;
    const int* ptr = &val;
    int* ptr1 = const_cast <int*>(ptr);
    fun(ptr1);
    cout << val; //The value remains 10.. Because original variable val is constant in nature
    return 0;
}