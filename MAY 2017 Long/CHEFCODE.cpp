// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Optimizations Done :
// Not placing elements greater than k or '1' in vector.
// Formulated total number of cases based on number of ones and other all cases.

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
typedef unsigned long long PAPA;

PAPA multiply(PAPA a, PAPA b) {
     PAPA result = 0;

     while(b > 0) {
       PAPA lastDigit = b & 1;
           if(lastDigit > 0) {
               result = result + a;
           }
       a = a << 1;
       b = b >> 1;
       }
   return result;
}

PAPA fast_power(int base, int power) {
    PAPA result = 1;
    while(power > 0) {

        if(power & 1) { 
            result = (result * base);
        }
        base = (base * base);
        power = power >>= 1; 
    }
    return result;
}

PAPA checkSub(vector<PAPA> arr, int n, PAPA k) {
    PAPA lim = fast_power(2, n);
   // cout << opsize << endl;
    PAPA pro = 1, count = 0;
    for (PAPA c = 1; c < lim; c++) {
    	pro = 1;
        for (int j = 0; j < n; j++) {
            if (c & (1<<j)) {
            	//cout << arr[j] << " ";
                pro = multiply(pro, arr[j]);
            }
        }
        //cout << pro << " " ;
   		if(pro <= k) {
   			count++;
   		}
    }
    return count;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	PAPA k, res = 1;
	cin >> n >> k ;
	vector<PAPA> a;
	int one = 0;
	for (int i = 0; i < n; i++) {
		PAPA x;
		cin >> x;
		if(x <= k && x!= 1){
			a.push_back(x);
			res = multiply(res, x);
		}
		if(x == 1) {
			one++;
		}
	}
	//cout << "one = " << one << endl;
	if(k == 1) cout << one;
	//else if(res <= k) {
		//cout << "res " << res << endl; 
	//	cout << fast_power(2, one + a.size()) - 1;
	//}
	else {
		//sort(a.begin(), a.end()); 
		cout <<  fast_power(2, one) * (checkSub(a, a.size(), k) + 1) - 1;	
	}
	return 0;	
}