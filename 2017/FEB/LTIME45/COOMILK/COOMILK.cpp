// Code by Piyush

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {

	std::ios::sync_with_stdio(false);
	int testCases;
	cin >> testCases;
	while(testCases--) {
		int minutes;
		cin >> minutes;
		string arr[minutes];
		for (int i = 0; i < minutes; i++)
			cin >> arr[i];
		bool instructions = true;
		for (int i = 0; i < minutes; i++) {
			if (arr[i] == "cookie" && arr[i + 1] != "milk") {
				instructions = false;
				break;
			}
		}
		if (instructions)
		  cout << "YES" << endl;
		else
		  cout << "NO" << endl;
	}
	return 0;
}
