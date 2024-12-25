#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    uint16_t t=1;
    cin >> t;

    while(t--) {
        char ch;
        cin >> ch;
        
        if('A' <= ch and ch <= 'Z') cout << "Uppercase Character" <<endl; 
        else if('a' <= ch and ch <= 'z') cout << "Lowercase Character" <<endl; 
        else if('0' <= ch and ch <= '9') cout << "Numerical Digit" <<endl; 
        else cout << "Special Characters" <<endl; 
    }
    return 0;
}
