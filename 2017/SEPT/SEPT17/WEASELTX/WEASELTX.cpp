// Copyright - udit3333(Codechef)
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
using namespace std;
#define ll long long  int
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define rep2(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 300005
#define INF 1000000005
#define NIL 0
#define source 100001
#define sink 100002
#define one 1ll
#define block 317
vector<vector<int> > vec(maxn);
int n, q;
ll arr[maxn], arr2[maxn];
bool visit[maxn];
void dfs(int x, int dis)
{
	visit[x] = 1;
	arr2[dis] ^= arr[x];
	rep(i, vec[x].size())
	{
		if(!visit[vec[x][i]]) dfs(vec[x][i], dis+1);
	}
}
vector<ll> merge(int l,int r,int k)
{
	vector<ll> res;
	if(k == 0)
	{
		res.pb(arr2[l]);
		return res;
	}
	int l1 = l+pow(2,k-1)-1;
	vector<ll> t1 = merge(l,l1,k-1);
	vector<ll> t2 = merge(l1+1,r,k-1);
	int x1 = pow(2,k), x2 = x1/2;
	rep(i, x1) res.pb(t1[i % x2]);
	rep1(i, x2-1) res[i] ^= t2[i];
	res[x2] ^= t2[0];
	return res;
}
int main()
{
	si(n);
	si(q);
	rep(i, n-1)
	{
		int x, y;
		si(x);
		si(y);
		vec[x].pb(y);
		vec[y].pb(x);
	}
	rep(i, n) sll(arr[i]);
	dfs(0, 1);
	while( floor(log2(n)) != (log2(n)) ) n++;
	vector<ll> vec2 = merge(1,n,log2(n));
	ll p = vec2.size();
	while(q--)
	{
		ll d;
		sll(d);
		printf("%lld\n", vec2[d%p]);
	}
	return 0;
}
