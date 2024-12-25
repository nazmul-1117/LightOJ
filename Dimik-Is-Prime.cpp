#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

bool isPrime(ll n){
    if(n==1) return false;
    if(n == 2) return true;
    
    for(ll i=2; i <= sqrt(n)+1; i++){
        if((n%i) == 0){
            return false;
        }
    }
    return true;
 }

int32_t main() {
    uint16_t t=1;
    cin >> t;

    while(t--) {
        
        ll n;
        cin >> n;

        if(isPrime(n)) cout << n << " is a prime" << endl;
        else cout << n << " is not a prime" << endl;
        
    }
    return 0;
}
