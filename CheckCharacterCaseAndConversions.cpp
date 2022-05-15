#include <iostream>
#include <string>

int main()
{
    char cValue = 'A';
    char lowerValue = tolower(cValue);
    std::cout << "tolower(cValue): " << lowerValue << std::endl;
    if (isupper(cValue))
    {
        std::cout << cValue << " is upper " << std::endl;
    }

    cValue = 'b';
    char upperValue = toupper(cValue);
    std::cout << "upperValue(cValue): " << upperValue << std::endl;
    if (islower(cValue))
    {
        std::cout << cValue << " is lower " << std::endl;
    }
    return 0;
} 