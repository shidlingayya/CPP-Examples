#include <iostream>
#include <stack>
using namespace std;

int main()
{
    std::stack<char> myStack;

    cout << "Push operation on Stack" << endl;
    myStack.push('A');
    myStack.push('B');
    myStack.push('C');
    myStack.push('D');
    cout << "Top of stack: " << myStack.top() << endl;

    cout << "Delete Last element from Stack" << endl;
    myStack.pop();
    cout << "Top of stack now: " << myStack.top() << endl;

    cout << "My Stack elements" << endl;

    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}