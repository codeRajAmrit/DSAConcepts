#include <iostream>

using namespace std; 

void factorial(int n, int result) {
    if (n <= 0) {
        cout << result << '\n';
        return;  
    } 
    result *= n; 
    factorial(n-1, result); 
    
}

int main() {
    int n{}; 
    cin >> n; 

    factorial(n, 1); 
    return 0; 
}
