// Code written by Monal
#include "bits/stdc++.h"
 
using namespace std;
 
 
void call_even(int n) {
	int j = 1;
	for (int i = 1; i <= n; i += 2) {
		cout<<n<<"\n";
		for (int k = 1; k <= n; ++k) {
			cout<<k<<" "<<j<<" "<<j+1<<"\n";
		}
		cout<<n<<"\n";
		for (int k = 1; k <= n; ++k) {
			cout<<k<<" "<<j<<" "<<j+1<<"\n";
		}
		j += 2;
	}
}
 
 
void call_odd(int n) {
	int j = 1;
	for (int i = 1; i <= n; ++i) {
		cout<<n<<"\n";
		for (int k = 1; k <= n; ++k) {
			cout<<k<<" "<<i<<" ";
			if (i != n)
				cout<<i+1;
			else
				cout<<1;
			cout<<"\n";
		}
	}
}
 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin>>tc;
	while (tc--) {
		int n;
		cin>>n;
		//vector <bool> init (n, false);
		//vector < vector <bool> > arr (n, vector <bool> (n, false));
		cout<<n<<"\n";
		if (n % 2 == 0) {
			call_even(n);
		}
		else {
			call_odd(n);
		}
		//arr.clear();
	}
	return 0;
}
