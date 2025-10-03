#include <iostream>
#include <map>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int numbers[n]; 
    map <int, int> frequency;
    pair <int, int> result = {0, 0}; 
    
    for (int i = 0; i < n; i += 1) {
        cin >> numbers[i];  
        frequency[numbers[i]] += 1; 
    }

    for (auto it : frequency) if (it.second > result.second || (it.second == result.second && it.first < result.first)) result = it; 

    cout << result.first << " " << result.second ; 

    return 0;
}