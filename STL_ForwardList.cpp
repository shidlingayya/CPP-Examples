#include <iostream> 
#include <forward_list>

int main()
{
	std::forward_list<int> flist;
	flist.assign(1, 15);
	std::cout << "the list contains after assign" << std::endl;
	for (auto x : flist)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	flist.insert_after(flist.before_begin(), 20);
	std::cout << "the list contains after insert_after" << std::endl;
	for (auto x : flist)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	flist.insert_after(flist.begin(), 30);
	std::cout << "the list contains after insert_after" << std::endl;
	for (auto x : flist)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	flist.insert_after(flist.begin(), 40);
	std::cout << "the list contains after insert_after" << std::endl;
	for (auto x : flist)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	flist.pop_front();
	std::cout << "the list contains after pop_front" << std::endl;
	for (auto x : flist)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;
	return 0;
}
