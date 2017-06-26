// Code written by Monal
#include "bits/stdc++.h"
#include <stdio.h>
 
using namespace std;
 
#define li long int
#define in(a) cin>>a
#define out(a) cout<<a<<"\n"
#define pb(a) push_back(a)
#define forn(n) for (int i = 0; i < n; ++i)
 
vector < string > yes;
vector < string > no;
vector <string > answer;
 
template <typename Container>
bool LexCompare(const Container& a, const Container& b) {
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}
 
// Use that comparison function to sort a range:
template <typename ContainerIterator>
void sort_by_lexicographical_comapre(ContainerIterator beg, ContainerIterator end) {
    sort(beg, end, LexCompare<typename ContainerIterator::value_type>);
}
 
 
string calculate(string check, vector<string> yes) {
	for (int i = 1; i <= check.length(); ++i) {
		int j;
		string temp = check.substr(0,i);
		for (j = 0; j < yes.size(); ++j) {
			if (i > yes[j].length())
				continue;
			if (temp == yes[j].substr(0,i)) 
				break;
		}
		if (j == yes.size())
			return temp;
	}
	return "NO";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	in(n);
	char ch;
	string s;
	forn(n) {
		in(ch);
		in(s);
		if (ch == '+')
			yes.pb(s);
		else
			no.pb(s);
	}
	forn(no.size()) {
		string temp = calculate(no[i],yes);
		if (temp != "NO")
			answer.pb(temp);
	}
	if (answer.size() != no.size()) {
		cout<<"-1";
		return 0;
	}
	set<string> myset( answer.begin(), answer.end() );
	answer.assign( myset.begin(), myset.end() );
	out(answer.size());
	forn(answer.size()) {
		out(answer[i]);
	}
	return 0;
}
