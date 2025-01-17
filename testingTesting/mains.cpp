#include <iostream>
using namespace std;

int main()
{
    string names[4] = {"Rafiu", "Baba Elegba", "Musiliu", "Ayanfe"};
    // cout << "Hello World!";

    int sizeOfArray = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << i + 1 << ". This are the names: " << names[i] << "\n";
    }

    return 0;
}