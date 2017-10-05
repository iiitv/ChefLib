// copyright: Gvs Akhil (vicennial), CSE, IIT Indore
#include<bits/stdc++.h>
#define sz(a) int((a).size())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define ld(a) while(a--)
#define tci(v, i) for(auto i = v.begin();i! = v.end();i++)
#define tcf(v, i) for(auto i : v)
#define all(v) v.begin(),v.end()
#define rep(i, start, lim) for(int (i) = (start);i < (lim);i++)
#define repd(i, start, lim) for(long long (i) = (start);i >= (lim);i--)
#define present(c, x) (find(all(c), x) != (c).end())
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define osit ostream_iterator
#define endl '\n'
#ifdef WIN32
#define getchar_unlocked getchar_unlocked
#endif
#define gc getchar
#define N 1000006
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long int ll;
typedef vector<long long int> vll;
typedef vector<vll> vvll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef tuple<int,int,int> iii;
typedef set<int> si;
typedef complex<double> pnt;
typedef vector<pnt> vpnt;
typedef priority_queue<ii,vii,greater<ii> > spq;
const ll MOD=1000000007LL;
template<typename T>void read(T &x) { register T c = gc(); x = 0; int t = 0; if (c == '-') t = 1, c = gc(); for (; (c < 48 || c>57); c = gc()); for (; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }if (t) x = -x; }
int vis[N], col[N], bg[N], ed[N], id[N], st[17][N], par[N], level[N], ctemp[N], gct, res, ans[N], siz;
int val[N];
vi g[N];
int last[N], maxn=0;
unordered_map<int,int> conv;
struct node{
	int l, r, i, lc, t = 0;
}q[N];
bool cmp(node& a,node& b){
	return a.l / siz==b.l / siz?(a.r / siz==b.r / siz?(a.t<b.t):(a.r / siz<b.r / siz)):(a.l / siz<b.l / siz);
}
struct node2{
	int u, prev, curr;
}up[N];
inline void pre(int n){
	for(int j = 1;(1<<j) <= n;j++){
		for(int i = 0;i < n;i++){
			if(st[j-1][i] != -1){
				st[j][i] = st[j-1][st[j-1][i]];
			}
		}
	}
}
void dfs(int n, int p, int ct){
	par[n] = p;
	level[n] = ct;
	st[0][n] = p;
	id[gct] = n; bg[n] = gct++;
	tcf(g[n], i){
		if(i == p) continue;
		dfs(i, n, ct + 1);
	}
	id[gct] = n; ed[n] = gct++;
}
inline int lca(int u, int v){
	if(level[u] < level[v]) swap(u,v);
	int dist=level[u]-level[v];
	while(dist){
		int k = log2(dist); dist -= (1<<k);
		u = st[k][u];
	}
	if(u==v) return u;
	for(int i = 16;i>= 0;i--){
		if(st[i][u] != -1 && st[i][u] != st[i][v]){
			u = st[i][u];
			v = st[i][v];
		}
	}
	return par[u];
}
inline void check(int& u){
	if(vis[u] && (--val[col[u]]) == 0) --res;
	else if(!vis[u] && (val[col[u]]++) == 0) ++res;
	vis[u] ^= 1;
}
inline void change(int& u, int& c){
	if(vis[u]){
		check(u); col[u] = c; check(u);
	}
	else col[u] = c;
}
int main(){
	conv.reserve(1024); conv.max_load_factor(0.25);
	int n, m, u, v; read(n); read(m);
	rep(i, 0, n) read(col[i]), ctemp[i] = col[i], last[i] = col[i];
	rep(i, 0, n-1){
		read(u); read(v); --u; --v; g[u].eb(v); g[v].eb(u);
	}
	sort(ctemp, ctemp + n);
	int zz=unique(ctemp, ctemp+n) - ctemp, org;
	rep(i, 0, n) {
		org = col[i];
		col[i] = (lower_bound(ctemp, ctemp+zz, col[i]) - ctemp) + 1; last[i] = col[i]; conv[org] = col[i];
		maxn = max(maxn, col[i]);
	}
	rep(j, 0, 17) rep(i, 0, n) st[j][i] = -1;
	dfs(0, -1, 0); pre(n);
	int type, y, qct = 0, uct = 0, lc, mtemp;
	siz=max( (int)pow(n, (double)2.0/(double)3.0) + 1500, 1000);
	rep(i, 0, m){
		read(type);
		if(type == 1){
			read(u); read(v); --u; --v;
			if(bg[u] > bg[v]) swap(u, v);
			q[qct].i = qct; q[qct].r = bg[v]; lc = lca(u, v); q[qct].lc = lc;
			if(lc == u) q[qct].l = bg[u];
			else q[qct].l = ed[u];
			q[qct].t = uct;
			++qct;
		}
		else{
			read(u); read(y); --u;
			mtemp = conv[y];
			if(!mtemp){
				++maxn; conv[y] = maxn; y = maxn;
			}
			else y = mtemp;
			up[uct].u = u; up[uct].prev = last[u]; up[uct].curr = y; last[u] = y; ++uct;
		}
	}
	sort(q, q + qct, cmp);
	int cl = q[0].l, cr = q[0].l - 1, now = 0, L, R, T;
	rep(i, 0, qct){
		L = q[i].l,R = q[i].r,T = q[i].t;
		while(now<T){
			change(up[now].u,up[now].curr); ++now;
		}
		while(now > T){
			--now; change(up[now].u, up[now].prev);
		}
		while(cr < R){
			++cr;
			check(id[cr]);
		}
		while(cl > L){
			--cl;
			check(id[cl]);
		}
		while(cl < L){
			check(id[cl]);
			++cl;
		}
		while(cr > R){
			check(id[cr]);
			--cr;
		}
		int u = id[L], v = id[R], lc = q[i].lc;
		if(lc != u && lc != v) check(lc);
		ans[q[i].i] = res;
		if(lc != u && lc != v) check(lc);
	}
	rep(i, 0, qct) printf("%d\n", ans[i]);
}
