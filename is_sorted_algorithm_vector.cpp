#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char* argv[]){
    std::vector<int> v1{ 1, 2, 3, 4 };
    std::vector<int> v2{ 1, 2, 4, 3 };
    if (std::is_sorted(v1.begin(), v1.end()))
    {
        std::cout << "v1 is sorted" << std::endl;
    }
    if (std::is_sorted(v2.begin(), v2.end()))
    {
        std::cout << "v2 is sorted" << std::endl;
    }
    else
    {
        std::cout << "v2 is not sorted" << std::endl;
    }
    exit(EXIT_SUCCESS);
}