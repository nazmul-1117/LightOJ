#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int8_t charToInt(char ch){
	return ch-48;
}

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t T;
    cin>>T;

    while(T--){
    	string str;

	    cin >> str;
	    if (charToInt(str[str.length()-1])%2)
	    {
	    	cout << "odd\n";

	    }else{
	    	cout << "even\n";
	    }
    }
}