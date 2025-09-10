#include <iostream>

using namespace std; 

int main() {
    int number {}; 
    cin >> number;
    
    int reversedNumber = 0; 
    while (number > 0) {
        reversedNumber = (reversedNumber * 10) + (number % 10); 
        number = number / 10; 
    }
    cout << reversedNumber << '\n'; 

    return 0; 
}