#include <bits/stdc++.h>
using namespace std;

int main() {
    uint16_t t;
    cin>>t;
    
    for (uint16_t k = 1; k <= t; k++) {
        
        uint32_t n = 100000; //65, 535
        cin >> n;
        
        printf("Case %hu: ", k);
        for (uint32_t i = 1; i <= n; i++) {
            
            if(n%i == 0){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
