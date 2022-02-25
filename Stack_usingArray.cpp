#include <iostream>
using namespace std;

class StackUsingArray
{
public:
    StackUsingArray(int stack_size) //Create stack parameters
    {
        stack = new int[stack_size];
        size = stack_size;
        top = -1;
    }

    void push(int data)
    {
        if (checkIfStackFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++; //increment the stack counter
        stack[top] = data;
    }

    int pop()
    {
        if (checkIfStackEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        } 
        int deleted_element = stack[top];
        top--;
        return deleted_element;
    }

    void display()
    {
        if (checkIfStackEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        for (auto i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }

private:
    bool checkIfStackFull()
    {
        return(top == size-1);
    }

    bool checkIfStackEmpty()
    {
        return(top == -1);
    }

    int top;
    int size;
    int* stack;
};

int main()
{
    std::unique_ptr<StackUsingArray> stackPtr(new StackUsingArray(5));
    if (stackPtr)
    {
        //Push Function Test
        stackPtr->push(10);
        stackPtr->push(20);
        stackPtr->push(30);
        stackPtr->push(40);
        stackPtr->push(50);   
        stackPtr->display();
        stackPtr->push(70); //Stack is full   

        //Pop Function Test
        cout << "After pop - <Last In First Out>" << stackPtr->pop() << endl;
        cout << "After pop - <Last In First Out>" << stackPtr->pop() << endl;
        cout << "After pop - <Last In First Out>" << stackPtr->pop() << endl;
        cout << "After pop - <Last In First Out>" << stackPtr->pop() << endl;
        cout << "After pop - <Last In First Out>" << stackPtr->pop() << endl;
        cout << "After pop - <Last In First Out>" << stackPtr->pop() << endl; //Stack empty
    }
}