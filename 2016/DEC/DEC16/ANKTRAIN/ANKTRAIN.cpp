// Code Written by Monal (cc handle: monalshadi)
# include "bits/stdc++.h"

using namespace std;

void checknprint(int n, int orgn) { // This will check for the seat placing and its adjacent seat number
	switch(n) {
		case 1:
		cout << orgn+3 << "LB" << endl;
		break;
		case 2:
		cout << orgn+3 << "MB" << endl;
		break;
		case 3:
		cout << orgn+3 << "UB" << endl;
		break;
		case 4:
		cout << orgn-3 << "LB" << endl;
		break;
		case 5:
		cout << orgn-3 << "MB" << endl;
		break;
		case 6:
		cout << orgn-3 << "UB" << endl;
		break;
		case 7:
		cout << orgn+1 << "SU" << endl;
		break;
		case 8:
		cout << orgn-1 << "SL" << endl;
		break;
		case 0:
		cout<<orgn-1<<"SL"<<endl;
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;
		checknprint(n%8, n);
	}
	return 0;
}
//okk
