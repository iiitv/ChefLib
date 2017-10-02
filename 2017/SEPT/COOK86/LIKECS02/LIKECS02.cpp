// Code by nextbigthing

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long x;
		cin >> x;
		if(x > 1)
		{
			long long y = x / 2;
			long long z = y + x;
			for(long long t = y;t < z;t++)
				cout << t << " ";
			cout << endl;
		}
		else 
			cout << 1 << endl;
	}
}
