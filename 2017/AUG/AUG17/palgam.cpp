#include <bits/stdc++.h>
 
#define sf scanf
#define pf printf
#define pb push_back
#define ll long long int
 
using namespace std;
 
int ct[2][27];
 
bool case_1()
{
	for(int i = 0; i < 26; i++)
		if(ct[0][i] >= 2 && ct[1][i] == 0)
			return true;
	return false;
}
 
bool case_2()
{
	for(int i = 0; i < 26; i++)
		if(ct[0][i] != 0 && ct[1][i] == 0)
			return false;
	return true;
}
 
bool case_3()
{
	int flag[2] = {0, 0};
	for(int i = 0; i < 26; i++)
	{
		if(ct[0][i] != 0 && ct[1][i] == 0)
			flag[0] = 1;
		if(ct[1][i] != 0 && ct[0][i] == 0)
			flag[1] = 1;
	}
	if(flag[0] == 1 && flag[1] == 0)
		return true;
	return false;
}
 
char evaluate()
{
	if(case_1())	return 'A';
	if(case_2())	return 'B';
	if(case_3())	return 'A';
	return 'B';
}
 
int main()
{
	int T;	cin >> T;
	while(T--)
	{
		string s, t;
		cin >> s >> t;
		memset(ct, 0, sizeof(ct));
		for(int i = 0; i < s.size(); i++)
			ct[0][s[i]-'a']++;
		for(int i = 0; i < t.size(); i++)
			ct[1][t[i]-'a']++;
		pf("%c\n", evaluate());
	}
	return 0;
}