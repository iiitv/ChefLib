// Made by Piyush
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int testCases;
	cin >> testCases;
	while (testCases--) {
		string input;
		vector<int> alpha(10, 0);
		cin >> input;
		for (int i = 0; i < input.length(); i++)
			++alpha[input[i] - 48];
		for (int i = 6; i < 10; i++) {
			if (alpha[i] > 0) {
				for (int j = 0; i < 10; j++) {
					char ch = i * 10 + j;
					if (ch >= 65 && ch <= 90) {
						if (j == i && alpha[j] > 1) cout << ch;
						if (j != i && alpha[j] > 0) cout << ch;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;	
}
