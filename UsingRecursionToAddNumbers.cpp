#include <iostream>

using namespace std; 

void addNumbers(int n, int result) {
    if (n <= 0){
        cout << result << '\n'; 
        return; 
    }
    result += n; 
    addNumbers(n -1, result); 
}

int main() {
    int n; 
    cin >> n; 
    addNumbers(n, 0);  
    return 0;
}