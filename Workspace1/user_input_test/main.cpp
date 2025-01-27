#include <iostream>

int main() 
{
    int inputNumber;
    
    std::cout << "Enter a number from 1 - 100: ";
    std::cin >> inputNumber;
    
    std::cout << "Amazing!! That's my favourite number too!" 
    << std::endl << "Not really!, " << inputNumber << " is my favorite number too." << std::endl;
    
}