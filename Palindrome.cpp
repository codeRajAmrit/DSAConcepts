#include <iostream>

using namespace std; 

void checkPalindrome(string s, int i){
    if (tolower(s[i - 1]) != tolower(s[s.size() - i])){
        cout << "It is not palindrome" << '\n'; 
        return;  
    }
    else if(i == s.size()/2 ) {
        cout << "It is Palindrome" << '\n'; 
        return; 
    } 
    checkPalindrome(s, i + 1); 
}

int main() {
    string text {}; 
    cin >> text; 

    checkPalindrome(text, 1); 
        
    return 0; 
}
