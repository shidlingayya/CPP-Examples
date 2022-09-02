#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char* argv[]){
    std::vector<int> myVect{ 1, 2, 3, 4, 4, 5, 6 };
    if (std::binary_search(myVect.begin(), myVect.end(), 4))
    {
        std::cout << "4 present in vector" << std::endl;
    }
    else
    {
        std::cout << "4 is not present in vector" << std::endl;
    }
    exit(EXIT_SUCCESS);
}