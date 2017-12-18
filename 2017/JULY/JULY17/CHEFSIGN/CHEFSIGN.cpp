// Code by Piyush

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
	 std::ios::sync_with_stdio(false);
	 int testCases;
	 cin >> testCases;
	 while (testCases--) {
		  string sign;
		  cin >> sign;
		  int l = 0, g = 0, temp1 = 0, temp2 = 0;
		  for (int i = 0; i < sign.length(); i++) {
			   if (sign[i] == '<') {
					temp1++;
					temp2 = 0;
			   }
			   else if (sign[i] == '>') {
					temp2++;
					temp1 = 0;
			   }
			   l = max(l, temp1);
			   g = max(g, temp2);
		  }
		  cout << max(l, g) + 1 << endl;
	 }
	 return 0;
}
