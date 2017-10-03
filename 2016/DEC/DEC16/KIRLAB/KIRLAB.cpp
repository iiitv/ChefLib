//This solution is not the most efficient and hence failed with big test cases
// Code Written by Monal (cc handle: monalshadi)
# include "bits/stdc++.h"
# include <stdio.h>

# define ll long long int
# define l long int

using namespace std;

ll gcd(ll a, ll b) { // find gcd
	if (b == 0)
		return a;
	else
		gcd(b, a % b);
}

int main() {
	int tc
	scanf("%d", & tc)
	while (tc--) {
		l n, counter = 0

		scanf("%ld", & n)
		l arr[n]
		l size[n]
		for (l i=0; i < n; i++) {
			scanf("%ld", & arr[i])
			size[i] = 0
		}

		for (l i=n-1; i > 0; i--) {
			l j = i-1
			while (j >= 0) {
				if(arr[i] == 1)
					break
				if(arr[j] != 1 & &gcd(arr[i], arr[j]) > 1 & &size[i]+1 > size[j]) { // we neglect 1's...check for gcd with element behind and also for their trail sizes
					size[j] = size[i]+1
						if(size[j] > counter)
						counter = size[j]
				}

				j--;
			}

		}
		printf("%ld\n", counter+1)
			// as we will always miss the one element
	}
	return 0
}
