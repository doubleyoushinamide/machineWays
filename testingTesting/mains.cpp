#include <iostream>
// using namespace std;

int main()
{
    std::string names[5] = {"Rafiu", "Baba Elegba", "Musiliu", "Ayanfe", "7"};
    // cout << "Hello World!";

    int sizeOfArray = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout << i + 1 << ". This are the names: " << names[i] << " ----> " << sizeOfArray << "\n";
    }

    return 0;
}