#include <iostream>
#include <memory>

int main() 
{
	std::unique_ptr<int> p1 = std::make_unique<int>();
	std::unique_ptr<int> p2 = std::make_unique<int>();

	*p1 = 10;
	*p2 = 30;

	std::cout << "(*p1 + *p2): " << (*p1 + *p2) << std::endl;
	std::cout << "(*p1 - *p2): " << (*p1 - *p2) << std::endl;
	std::cout << "(*p1 * *p2): " << (*p1 * *p2) << std::endl;
	std::cout << "(*p1 / *p2): " << (*p1 / *p2) << std::endl;

	return 0;
}
