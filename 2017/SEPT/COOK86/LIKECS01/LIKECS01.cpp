// code written by heet
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int a[26] = {0};
		int n = s.size();
		bool isbreak = false;
		for (int i = 0; i < n; ++i) {
			a[(int)s[i] - 97]++;
			if(a[(int)s[i] - 97 ] == 2) {
				cout << "yes\n";
				isbreak = true;
				break;
			}
		}
		if(!isbreak)
			cout << "no\n";
	}
		return 0;
}
