// Code written by Monal
// This solution is perfect but the only thing that this lacks is efficieny. Hence, failed on big test cases
# include "bits/stdc++.h"

# define ll long long int
# define l long int

using namespace std;

bool checkBase(ll n, ll b) {  // To check if the leading bit in bth base is 1
    int digit = 0

    while(n/b > 0) {
        n /= b
    }
    digit = n % b
    if(digit == 1) {
        return true
    }
    else {
        return false
    }
}

int main() {
    ios::sync_with_stdio(false);
    l tc;
    cin >> tc;
    while(tc--) {
        ll n;
        cin >> n;
        if(n == 1) { // trivial case
            cout << "INFINITY\n";
            continue;
        }
        if(n == 0) { // trivial case
            cout << "0\n";
            continue;
        }
        int counter = floor(n/2);
        for(ll i = 2; i <= sqrt(n); i++) {
            if(checkBase(n, i))
            counter++;
        }
        if(n % 2 == 0) {
            counter--;
        }
        cout << counter+1 << endl; // as for any base greater than n we will have the same number as answer
    }
    return 0;
}
