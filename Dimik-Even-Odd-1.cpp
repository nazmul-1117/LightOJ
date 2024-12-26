#include <bits/stdc++.h>
using namespace std;

int main() {
    uint16_t t;
    cin>>t;
    
    while(t--){
        uint32_t n;
        cin>>n;
        
        if(n&1){
            cout << "odd" << endl;
        }
        else{
            cout << "even" << endl;
        }
    }
    return 0;
}
