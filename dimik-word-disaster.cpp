#include <bits/stdc++.h>
using namespace std;

void reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    cout << reversed << " ";
}

void separateWord(const string& str) {
    stringstream ss(str);
    string word;

    while (ss >> word) {
        reverseString(word);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t T;
    cin >> T;
    cin.ignore(10, '\n');

    while(T--){
    	string str;
	    getline(cin, str);

	    separateWord(str);
	    cout<<endl;
    }

    return 0;
}
