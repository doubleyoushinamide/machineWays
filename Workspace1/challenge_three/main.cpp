#include <iostream>
using namespace std;

int main() {
    //declaring constants
    const int PRICE_OF_SMALL_ROOMS {25};
    const int PRICE_OF_LARGE_ROOMS {35};
    
    cout << "Enter the number of (small) rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "Enter the number of (large) rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    cout << "===================================\n";
    cout << "Estimate for cleaning services.." << endl;
    cout << "===================================\n";
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    
    cout << "Price per small room: $" << PRICE_OF_SMALL_ROOMS << endl;
    cout << "Price per large room: $" << PRICE_OF_LARGE_ROOMS << endl;
    int total_rooms {number_of_small_rooms + number_of_large_rooms};
    int total_price {PRICE_OF_SMALL_ROOMS + PRICE_OF_LARGE_ROOMS};
    cout << "Cost: $" << total_price * total_rooms << endl;
    cout << "Tax: $" << total_price * total_rooms * 0.06 << endl;
    cout << "===================================\n";
    cout << "Total estimate: $" << (total_price * total_rooms) + (total_price * total_rooms * 0.06) << endl;
    cout << "This estimate is valid for 30 days" << endl;
    
    return 0;
}