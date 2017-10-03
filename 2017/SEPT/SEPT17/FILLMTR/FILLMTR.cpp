#include < bits/stdc++.h >

//____By:sirjan13____

#define ll long long int
#define mod 1000000007
#define show(a) for(i=0;i<a.size();i++) cout<<a[i]<<" ";
#define fi first
#define se second
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define pb push_back
#define pi pair<int,int>
#define si set< int >
#define sll set< ll >
#define maxheap priority_queue< int >
#define minheap priority_queue< int,vector< int >,greater< int > >
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define long_zero 0ll
#define long_one 1ll

inline int sbt(int x){return __builtin_popcount(x);}

using namespace std;

struct cell {
	int nind;
	int x;
};

bool v[100002];
int arr[100002];
bool fff=false;

vector< cell > a[100002];

void f( int p,int current ){
	v[ current ]=true;
	for(int i=0;i<a[current].size();i++){
		if ( !v[a[current][i].nind] ) {
			arr[a[current][i].nind]=a[current][i].x+arr[current];
			f(current,a[current][i].nind);
		}
		else if ( p!=a[current][i].nind ){
			if( ( arr[ current ] + a[ current ][ i ].x - arr[a[current][i].nind]) & 1 ) {
				fff = true;
				return;
			}
		}
	}
}
void freespace(int n){
	for(int i = 1 ;i <= n; i++) a[i].clear();
}
int main() {
	fast_io()
	int t;
	cin >> t;

	while ( t-- ){
		memset (v, false, sizeof(v));
		int n,m,r,c,va;
		cin >> n >>m;
		fff=false;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<m;i++){
			cin >> r >> c >> va;
			cell nwc;
			nwc.nind=c;
			nwc.x=va;
			a[r].pb(nwc);
			cell nw2c;
			nw2c.x=va;
			nw2c.nind=r;
			a[c].pb(nw2c);
		}
		for(int i=1;i<=n;i++){
			if(!v[i]){
				f(0,i);
				if(fff){
					break;
				}
			}
		}
		freespace(n);
		if(fff)
			cout << "no";
		else
			cout << "yes";
		cout<<endl;
	}
	return 0;
}
