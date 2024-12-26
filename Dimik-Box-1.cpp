#include <bits/stdc++.h>
using namespace std;

int main() {
    uint16_t t;
    cin>>t;
    
    while(t--){
        uint16_t n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }cout << endl;
        }
        if(t != 0) cout << endl;
    }
    return 0;
}
