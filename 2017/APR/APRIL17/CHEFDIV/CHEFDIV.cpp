// Code written by Monal
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
 
#define ll long long int
#define l long int
#define maxi 1000000
#define in(a,b) cin>>a>>b
 
using namespace std;
 
#define number_arr(a,b) for (ll i = 0; a + i <= b; ++i) { numbers[i] = a + i; }
 
vector<l> primes;
bool primes_bool[maxi];
void sieve() {  // Find primes
  fill(primes_bool, primes_bool + maxi, true);
 
    for(l i=2;i<maxi;++i) {
      if(primes_bool[i]) {
        primes.push_back(i);
      }
 
      if(primes_bool[i] && i < 10000)
        for(l j=i*i; j<maxi; j+=i) {
          primes_bool[j] = false;
        }
    }
}
 
ll a, b;
ll numbers[maxi];
vector<ll>occ_arr[maxi];
void count_prime_for_number() {  // Counts prime divisors for each number in range [a,b]
    for (ll i=0; i < primes.size(); ++i) {
    ll temp = a + (primes[i] - a % primes[i]) % primes[i];
    ll start = temp - a;
    while (temp <= b) {
      if (a <= temp) {
        ll occ = 0;
        while (numbers[start] % primes[i] == 0) {
          occ++;
          numbers[start] /= primes[i];
        }
        occ_arr[start].push_back(occ);
      }
 
      temp += primes[i];
      start += primes[i];
    }
  }
 
}
 
int main() {
  ios::sync_with_stdio(false);
  sieve();
  in(a,b);
  number_arr(a,b); // storing numbers in array
  count_prime_for_number();     // checking for each prime to divide number in range [a,b]
  ll answer = 0;
  for (ll i = 0; i <= b - a; ++i) {       // Clubbing up divisors for longest branch
    vector<ll> tmp = occ_arr[i];
    if (numbers[i] != 1) {
     tmp.push_back(1);
    }
    if (tmp.size() != 0) {
 
      sort(tmp.begin(), tmp.end());     // sort decreasingly
      for (ll i = 0; i < tmp.size() / 2; ++i) {
        swap(tmp[i], tmp[tmp.size() - i - 1]);
      }
 
      while (tmp[0] > 0) {
        ll count_divi = 1;
        for (l j = 0; j < tmp.size(); ++j) {
         count_divi *= tmp[j] + 1;
        }
        tmp[0]--;
        answer += count_divi;
 
        sort(tmp.begin(), tmp.end());           // Sort decreasingly
        for (ll i = 0; i < tmp.size() / 2; ++i) {
         swap(tmp[i], tmp[tmp.size() - i - 1]);
        }
 
      }
    }
  }
  cout<<answer;
  return 0;
}
