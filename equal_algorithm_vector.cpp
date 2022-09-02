#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char* argv[]){
    std::vector<int> v1{ 1, 2, 3, 4 };
    std::vector<int> v2{ 1, 2, 3, 4 };
    if (std::equal(v1.begin(), v1.end(), v2.begin()))
    {
        std::cout << "v1 and v2 are equal" << std::endl;
    }
    else
    {
        std::cout << "v1 and v2 are not equal" << std::endl;
    }
    exit(EXIT_SUCCESS);
}