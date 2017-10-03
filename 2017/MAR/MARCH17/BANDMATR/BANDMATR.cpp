// Code written by Monal
#include"bits/stdc++.h"

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		int ones=0;
		int tmp;
		for(int i=0;i<n*n;++i)
		{
			cin>>tmp;
			if(tmp)
				ones++;
		}
		if(ones<=n)
			cout<<"0\n";
		else
		{
			tmp=0;
			for(int i=0;i<n;++i)
			{
				tmp+=2*i;
				int back=(2*i+1)*n-(tmp);
				int front=(2*(i+1)+1)*n-(tmp+2*(i+1));
				if(ones>back&&ones<=front)
				{
					cout<<i+1<<"\n";
				}
			}
		}
	}
	return 0;
}
