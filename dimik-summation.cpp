#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;

    while(T--){
    	int a;
    	cin >> a;
    	cout << "Sum = " << (a%10)+(a/10000) <<endl;
    }
}