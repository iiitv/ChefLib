// Code by Piyush

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {

	 std::ios::sync_with_stdio(false);
	 int testCases;
	 cin >> testCases;
	 while (testCases--) {
		  int up = 0, down = 0;
		  string input;
		  cin >> input;
		  if (input[0] == 'U')
			   up++;
		  else
			   down++;
		  for (int i = 0; i < input.length(); i++) {
			   if (input[i] == 'U' && input[i + 1] == 'D')
					down++;
			   else if (input[i] == 'D' && input[i + 1] == 'U')
					up++;
		  }
		  cout << min(up, down) << endl;
	 }
	 return 0;
}
