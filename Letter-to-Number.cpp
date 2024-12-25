#include <bits/stdc++.h>
using namespace std;

int main() {
    uint16_t t=1;
    cin >> t;

    while(t--) {
       string str = "ABZ";
       cin >> str;
        for (int i = 0; i < str.length(); i++) {
            cout << str[i] - 64;
        }cout << endl;
    }
    return 0;
}
