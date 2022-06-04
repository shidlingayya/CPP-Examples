#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char** argv)
{
	std::vector<int> v{ 10, 20, 30, 30, 30, 40, 50 };
	auto it = std::unique(v.begin(), v.end());
	v.resize(std::distance(v.begin(), it));
	for (auto x : v)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;
	return 0;
}