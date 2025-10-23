#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif

    int n, target;
    cin >> n >> target;
    vector<int> num(n);
    unordered_map<int, int> hashMap;
    for (int i = 0; i < n; i += 1) cin >> num[i];

    // brute forces takes O(n^2)
    // better approach using hashing. O(n)
    for (int x : num) hashMap[x] += 1;

    int cnt = 0;

    for (int x : num) {
        int q = target - x;
        if (hashMap[q] > 0) cnt += 1;
    }

    if (cnt > 0) cout << "TRUE";
    else cout << "FALSE";

    return 0;
}
