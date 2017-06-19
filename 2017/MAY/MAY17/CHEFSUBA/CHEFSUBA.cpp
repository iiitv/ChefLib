// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Result = Partial Correct Answer (30 marks)

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define mod(x) 			x%1000000007;
#define MIN(n1, n2 )    ((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2 )    ((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)       (s+(e-s)/2)
#define FOR(i, a, b) 	int i; for(i=(a);i<(b);i++)
#define FORD(i, a, b) 	int i; for(i=(a);i>(b);i--)
#define show(a)			for(i=0;i<sizeof(a);i++) cout<<a[i]<<" ";
#define get(a)			for(i=0;i<sizeof(a);i++) cin>>a[i];
#define scanint(a) 		scanf("%d",&a)
#define scanLLD(a) 		scanf("%lld",&a)
#define scanstr(s) 		scanf("%s",s)
#define scanline(l) 	scanf(" %[^\n]",l);

typedef long int BIG;
typedef long long PAPA;


int maxSum(std::vector<int> arr, int n, int k) {
    
    if(k>n)
    	k=n;
    int res = 0;
    for (int i = 0; i < k; i++)
       res += arr[i];
 
    int csum = res;
    for (int i = k; i < n; i++) {
       csum += arr[i] - arr[i-k];
       res = MAX(res, csum);
    }
 
    return res;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	int n, k, p;
	cin >> n >> k >> p;
	std::vector<int> a(n);
	string q;
	for (int i = 0; i < n; i++)	{
		cin >> a[i];
	}
	cin >> q;
	for (int j = 0; j < p; j++) {
		int sum = 0, temp = 0;
		if (q[j] == '?') {
			printf("%d\n" ,maxSum(a, n, k));
		}
		if (q[j] == '!') {
			// Method 1
			std::rotate(a.rbegin(), a.rbegin() + 1, a.rend());
			
			// Method 2
			//shift_vec(a, 1);
			

			//for (int x: a)
        	//	cout << x << ' ';
    		//cout << '\n';
		}
	}
	return 0;	
}