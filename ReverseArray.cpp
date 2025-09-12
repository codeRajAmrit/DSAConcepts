#include <iostream>

using namespace std;

void reverseArray(int arr[],int n, int i) {
    //base condition
    if (i > n/2) {
        for (int j = 0; j < n; j += 1) cout << arr[j] << " "; 
        return ; 
    }
    
    // to swap elements at (i - 1) and (n - i) index.
    int x = arr[i-1]; 
    arr[i-1] = arr[n-i]; 
    arr[n-i] = x; 
    
    reverseArray(arr, n, i + 1); 
}

int main() {
    int n; 
    cin >> n;
    int arr[n];  
    for (int i = 0; i < n; i += 1) cin >> arr[i]; 

    reverseArray(arr, n, 1); 
    cout << '\n'; 

    return 0; 
}
