//Only if a number is power of 2 and is not present, it is required to add.
//Make a pattern till 12-13 and you will realize you can make all
//numbers from taking bitwise or of some of numbers other than power of 2s

//code copyright: Manish Kumar, E&C, IIT Roorkee
#include <iostream>
#include <cmath>
#include <climits>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
#define si(n) scanf("%d",&n)
#define mem(A,i) memset(A, i, sizeof(A))
#define rep(i, start, end) for(int i=start; i<end; i++)
#define repDown(i, start, end) for(ll i=start; i>=end; i--)

bool powerof2(int x){
  return x && (!(x&(x-1)));
}

int n,k;
int arr[100005];
#define sz 1<<21

int main(){
	int t=1;
	si(t);
	while(t--){
		si(n);
		si(k);
		rep(i,0,n) si(arr[i]);
		bool present[10 + (1 << k)];
		mem(present, false);
		rep(i,0,n) present[arr[i]] = true;
		int ans = 0;
		rep(i,1,1<<k) if(powerof2(i) && present[i] == false) ans++;
		cout << ans << endl;
	}
	return 0;
}
