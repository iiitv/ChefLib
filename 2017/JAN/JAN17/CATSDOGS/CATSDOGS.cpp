// Code written by Monal
#include"bits/stdc++.h"

#define li long int
#define ll long long int
using namespace std;
int main()
{
ios::sync_with_stdio(false);
li tc;
cin>>tc;
while(tc--)
	{
	ll c,d,l;
	cin>>c>>d>>l;
	if(4*(c+d)==l)
		cout<<"yes\n";
	else if(l%4!=0)
		cout<<"no\n";
	else if(4*(c+d)<l)
		cout<<"no\n";
	else if(l<4*d)
		cout<<"no\n";
	else if(d==0&&c*4!=l)
			cout<<"no\n";
	else
		{
		ll legs=l-4*d;
		if(legs%4==0&&2*d>=c)
			cout<<"yes\n";
		else if(c>2*d)
			{
			c=c-2*d;
			if(l<4*d+c*4)
				cout<<"no\n";
			else
				cout<<"yes\n";
			}
		else
			cout<<"no\n";
		}
	}
return 0;
}
