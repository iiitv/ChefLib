// Code by Piyush
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {

    	std::ios::sync_with_stdio(false);
	int testCases;
	cin >> testCases;
    	while(testCases--) {
    		int n;
    		cin >> n;
    		int a[n];
     	for(int i = 0; i < n; i++)
	    	    cin >> a[i];

	     for(int i = 0; i < n; i++)
	    	    cout << a[i];

    	     cout << endl;
    	}
    return 0;
}
