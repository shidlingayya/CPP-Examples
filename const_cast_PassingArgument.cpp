#include <iostream>
void fun(int* ptr)
{
	std::cout << "ptr value: " << *ptr << std::endl;
}
int main()
{
	const int val = 10;
	const int* ptr = &val;
	int* ptr1 = const_cast<int*> (ptr);
	fun(ptr1);
	return 0;
}
