#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5;
vector<ll> dp(MAX_N); 

uint32_t tc = 0;

ll fact(uint32_t n){
    
    if(dp[n] > 0) return dp[n];
    tc++;
    if(n < 2) return 1;
    
    ll ans = n * fact(n-1);
    dp[n] = ans;
    return ans;
}

int main() {
    uint16_t t=1;
    cin >> t;

    while(t--) {
        uint32_t n=7;
        cin >> n;

        dp[0] = 0LL;
        dp[1] = 1LL; 

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
        
        // cout << "Answer: " << ans << endl; // 5->2.7083, 6-> 2.7167, 7-> 2.7181 DP(same);
        // cout << "TC: " << tc  << endl; // 5 -> 15, 6 -> 21, 7 -> 28  DP --> ( 5-> 4, 6 -> 5, 7->6);
        
    }

    return 0;
}
