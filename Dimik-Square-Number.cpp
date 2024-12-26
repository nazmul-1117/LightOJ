#include <bits/stdc++.h>
using namespace std;

int main() {
    uint16_t t=1;
    cin>>t;
    
    while(t--){
        int n;
        cin >> n;
        
        double x = (double)sqrt(n);
        if(floor(x) == x) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}
