//Made by vanguard7
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long int prices[26], sum = 0;
		int freq[26]= {0};
		string s;
		for (int i = 0; i < 26; ++i) {
			cin >> prices[i];
		}
		cin >> s;
		for(int i = 0; i < s.length(); ++i) {
			++freq[s[i] - 97];
		}
		for(int i = 0; i < 26; ++i) {
			if (freq[i] == 0) {
				sum += prices[i];
			}
		}
		cout << sum << endl;
	}
	return 0;
}
