// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Answer Status : Correct Answer

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

typedef long int BIG;
typedef long long PAPA;

int main() {
	std::ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		string s;
		int b, m, r, e, i;
		for(i=0 ; i<4; i++) {
			cin >> s;
			if(s == "Barcelona")
				cin >> b;
			else if(s == "Malaga")
				cin >> m;
			else if(s == "RealMadrid")
				cin >> r;
			else if(s == "Eibar")
				cin >> e;
		}
		if(m>r && b>e)
			cout << "Barcelona" << endl;
		else
			cout << "RealMadrid" << endl;

	}
	return 0;	
}