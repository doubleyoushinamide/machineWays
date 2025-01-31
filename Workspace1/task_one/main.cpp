#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int m {};
    int d {};
    int y {};
    
    cout << "Input your Date of birth (dd-mm-yyyy): ";
    
    cin >> m;
    cin >> d;
    cin >> y;
    cin.ignore();
    
    string name {};
    cout << "Input your name Here: ";
    getline(cin, name);
    
    cout << "DOB for " << name << " : " << m << "-" << d << "-" << y << endl;
    return 0;
}