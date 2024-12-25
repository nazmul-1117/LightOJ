#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5;
vector<uint32_t> v(MAX_N); 

uint32_t tc = 0;

ll fact(uint32_t n){
    
    tc++;
    
    if(n < 2) return 1;
    
    ll ans = n * fact(n-1);
    return ans;
}

int main() {
    uint16_t t;
    cin >> t;

    while(t--) {
        uint32_t n;
        cin >> n;

        v[0] = 0;
        v[1] = 1; 

        // for (int i = 0; i < n; ++i) {
        //     cout << v[i] << " ";
        // }
        // cout << endl; 
        
        cout << fixed << setprecision(4);
        
        double ans = 0.0F;
        for (int i = 1; i <= n; i++) {
            
            ll factor = fact(i);
            ans += (double)((float)i/factor);
        }
        // cout << factor * 1LL << endl;
        cout << ans << endl;
        // cout << "TC: " << tc  << endl;
        
        
        
        
        
    }

    return 0;
}
