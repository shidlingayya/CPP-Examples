#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char* argv[]){
    std::vector<int> myVect{ 1, 2, 3, 4, 4, 5, 6 };
    if (find(myVect.begin(), myVect.end(), 5) != myVect.end()){
        std::cout << "5 is found" << std::endl;
    }
    else{
        std::cout << "5 is not found" << std::endl;
    }

    if (find(myVect.begin(), myVect.end(), 10) != myVect.end()){
        std::cout << "10 is found" << std::endl;
    }
    else{
        std::cout << "10 is not found" << std::endl;
    }
    exit(EXIT_SUCCESS);
}