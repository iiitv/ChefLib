#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BinSearch(vector<int> &v, int l, int r, int h) {
	while (r-l > 1) {
	int m = l + (r-l)/2;
	if (v[m] >= h)
		r = m;
	else
		l = m;
	}
	return r;
}

int resfn(vector<int> &x) {
	if (x.size() == 0)
		return 0;

	vector<int> end(x.size(), 0);
	int length = 1; 
	end[0] = x[0];
	for (size_t i = 1; i < x.size(); i++) {
		if (x[i] < end[0])
			end[0] = x[i];
		
		else if (x[i] > end[length-1])
			end[length++] = x[i];

		else
			end[BinSearch(end, -1, length-1, x[i])] = x[i];
	}

	return length;
}


int main() 
{
	std::ios::sync_with_stdio(false); //for making FASTER I/O.
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m ;
		int i,j;
		vector<int> v1(n);
		for(i=0;i<n;i++)
		{
			cin >> v1[i];
		}

		while(m--)
		{
			int l,r;
			cin >> l >> r;
			std::vector<int> newvec(r-l+1);
			copy(v1.begin()+l-1,v1.begin()+r,newvec.begin());
			cout << resfn(newvec) << endl;
		}

	}
}
