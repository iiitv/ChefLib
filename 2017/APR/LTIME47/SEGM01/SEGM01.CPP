// Code written by Monal
#include "bits/stdc++.h"
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	int tc;
	cin>>tc;
	while (tc--) {
		string s;
		cin>>s;
		vector<long int > occ;
		int nocc;
		for (int i=0;i<s.length();++i) {
			if (s[i]=='1') {
				nocc=0;
				while (s[i]=='1'&&i<s.length()) {i++; nocc++;}
				i--;
				occ.push_back(nocc);
			}
		}
		if (occ.size()==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		occ.clear();
	}
	return 0;
}
