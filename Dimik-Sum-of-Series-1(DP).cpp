#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

const int MAX_N = 1e5;
vector<ll> dp(MAX_N, 0);

ll power(uint16_t x, uint16_t k){
    if(dp[k] != -1) return dp[k];
    if(k == 0) return 1;
    
    ll ans = x * power(x, k-1);
    dp[k] = ans;
    return ans;
}

int32_t main() {
    uint16_t t=1;
    cin >> t;

    while(t--) {
        uint16_t x = 5, k = 6;
        cin >> x >> k;
        
        dp.assign(k+1, -1);
        
        ll ans = 0LL;
        for (uint16_t i = 0; i <= k; i++) {
            ans += power(x, i);
        }
        cout << "Result = " << ans * 1LL << endl;
    }

    return 0;
}
