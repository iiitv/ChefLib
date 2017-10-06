//By Savitoj Singh
#include< bits/stdc++.h >
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s[n];
		int y[5] = {0};
		for (int i=0 ; i < n ; i++) {
			cin >> s[i];
		}
		for (int i=0 ; i < n ; i++) {
			if ( s[i] == "cakewalk" )
				y[0] = 1;
			if ( s[i] == "easy" )
				y[2] = 1;
			if ( s[i] == "simple" )
				y[1] = 1;
			if ( s[i] == "easy-medium" || s[i] == "medium" )
				y[3] = 1;
			if ( s[i] == "hard" || s[i] == "medium-hard" )
				y[4]=1;
		}
		int flag = 1;
		for (int i=0 ; i < 5 ; i++) {
			if(y[i] == 0) {
				flag = 0;
				break;
			}
		}
		if ( flag ) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	return 0;
}
