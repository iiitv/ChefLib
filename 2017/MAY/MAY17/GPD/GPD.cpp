//Solution by ista2000
//Original solution link: https://www.codechef.com/viewsolution/13585707
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int n, q, r, key;
//Solution uses a persistent trie to solve this problem, all the function names are self-explanatory
struct trie
{
	int nxt[2];
	trie()
	{
		nxt[0] = nxt[1] = -1;
	}
}ar[300002 * 32];//This is the trie, ar[i] is a node in the trie
int tot = 0;
void insert(int x, int root)
{
	int i = 32;
	while(i--)
	{
		int b = (bool)(x & (1 << i));
		if(ar[root].nxt[b] == -1)
		{
			ar[++tot] = trie();
			ar[root].nxt[b] = tot;
		}
		else
		{
			ar[++tot] = ar[ar[root].nxt[b]];
			ar[root].nxt[b] = tot;
		}
		root = ar[root].nxt[b];
	}
}
map<int, vector< pair<int,int> > > g;
map<int, int> start;
void dfs(pair<int,int> u, pair<int,int> p)
{
	ar[++tot] = ar[ start[p.first] ];
	start[u.first] = tot;
	insert(u.second, start[u.first]);
	for(pair<int,int> v: g[u.first])
		dfs(v, u);
}
void addnode(int v, int u, int k)
{
	ar[++tot] = ar[ start[v] ];
	start[u] = tot;
	insert(k, start[u]);
}

int maxxor(int x, int root)
{
	int i = 32, ret = 0;
	while(i--)
	{
		int b = (bool)(x & (1 << i));
		if(ar[root].nxt[b ^ 1]==-1)
			root = ar[root].nxt[b];
		else
			ret += 1 << i, root = ar[root].nxt[b ^ 1];
	}
	return ret;
}
int minxor(int x, int root)
{
	int i = 32, ret = 0;
	while(i--)
	{
		int b = (bool)(x & (1 << i));
		if(ar[root].nxt[b]==-1)
			ret += 1 << i, root = ar[root].nxt[b ^ 1];
		else
			root = ar[root].nxt[b];
	}
	return ret;
}

#undef int
int main()
{
#define int long long int

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> q >> r >> key;
	for(int i = 0;i<n-1;i++)
	{
		int u, v, k;
		cin >> u >> v >> k;
		g[v].push_back({u, k});
	}
	ar[0] = trie();
	start[0] = 0;
	tot = 0;
	dfs( {r, key}, {0, 0});
	int la = 0;
	while(q--)
	{
		int t;
		cin >> t;
		t ^= la;
		if(t == 0)
		{
			int u, v, k;
			cin >> v >> u >> k;
			v ^= la;
			u ^= la;
			k ^= la;
			addnode(v, u, k);
		}
		else
		{
			int u, k;
			cin >> u >> k;
			u ^= la;
			k ^= la;
			int ans1 = maxxor(k, start[u]);
			int ans2 = minxor(k, start[u]);
			la = ans1 ^ ans2;
			cout << ans2 << " " << ans1 << endl;
		}
	}

	return 0;
}
