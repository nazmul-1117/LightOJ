#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    uint16_t t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector <int> v1(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        
        int m;
        cin>>m;
        vector <int> v2(m);
        
        for (int i = 0; i < m; i++) {
            cin >> v2[i];
        }
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        
        vector <int> x(n+m);
        merge(v1.begin(), v1.end(), v2.begin(), v2.end(), x.begin());
        
        for (auto i : x) {
            cout << i << " ";
        }cout << endl;
    }

    return 0;
}
