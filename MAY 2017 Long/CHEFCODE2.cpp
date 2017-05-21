// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <bits/stdc++.h>
#include <stdio.h>

// Optimizations Done :
// Not placing elements greater than k or '1' in vector.
// Formulated total number of cases based on number of ones and other all cases.

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
 
 
int main() {
	std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int n;
	PAPA k;
	cin >> n >> k ;
  PAPA one = 0;
  vector<PAPA> a;
  vector<PAPA> b;
  vector<PAPA> s1;
	vector<PAPA> s2;

	for (int i = 0; i < n; i++) {
		PAPA x;
		cin >> x;
		if(x<=k && i <= n/2 && x!=1){
			a.push_back(x);
		}
    else if(x<=k && i > n/2 && x!=1) {
      b.push_back(x);
    }
    else if(x==1)
      one++;
	}
	//sort(a, a+n);

  PAPA opsize1 = pow(2, a.size());
   // cout << opsize << endl;
    PAPA pro = 1, count = 0;
    for (PAPA c = 1; c < opsize1; c++) {
      pro = 1;
        for (int j = 0; j < a.size(); j++) {
            if (c & (1<<j)) {
              //cout << arr[j] << " ";
                pro = multiply(pro, a[j]);
            }
        }
        //cout << pro << " " 
      if(log10(pro) <= 18 && pro <= k) {
        s1.push_back(pro);
        count++;
      }
    }

    PAPA opsize2 = pow(2, b.size());
   // cout << opsize << endl;
    pro = 1;
    for (PAPA c = 1; c < opsize2; c++) {
      pro = 1;
        for (int j = 0; j < b.size(); j++) {
            if (c & (1<<j)) {
              //cout << arr[j] << " ";
                pro = multiply(pro, b[j]);
            }
        }
        //cout << pro << " " ;
      if(log10(pro) <= 18 && pro <= k) {
        s2.push_back(pro);
        count++;
      }
    }

  PAPA res1 = count;

//for(int i=0; i<s1.size(); i++)
//  cout << s1[i] << ' ';
//cout << endl;
//for(int i=0; i<s2.size(); i++)
//  cout << s2[i] << ' ';
//cout << endl;
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
  for(PAPA i = 0; i< s1.size(); i++) {
      for(PAPA j = 0 ; j < s2.size(); j++) {
        if(log10(s1[i]) + log10(s2[j]) < 18) {
          if(multiply(s1[i], s2[j]) <= k) {
            res1++;
          }
          else if(multiply(s1[i], s2[j]) > k) {
            break;
          }
      }
   }
}

	cout << pow(2, one) * (res1 + 1) - 1 ;
	return 0;	
} 