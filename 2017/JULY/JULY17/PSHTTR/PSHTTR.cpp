#include<bits/stdc++.h>
#include<sstream>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define mod 1000000007
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(ll)a;i<(ll)b;i++)
#define revrep(i,a,b) for(i=(ll)a;i>=(ll)b;i--)
#define strep(it,v) for(it=v.begin();it!=v.end();++it)
#define ii pair<ll,ll>
#define MP make_pair
#define pb push_back
#define f first
#define se second
#define ll long long int
#define vi vector<ll>
#define rs resize
vector<vector<ii> > adj;
vector<pair<ii,ll> > ed;
vi visit,in,out,l,tree,xors,lazy,ans;
ll st = 1,n,q,i,a,b,po,T,w,t;
bool cmp(pair<ii,ll> a,pair<ii,ll> b)
{
   return a.se > b.se;
}
const ll N = 100009;
struct node{
   ll l,r,k,p;
}L[N];
void dfs(ll v)
{
    visit[v] = st;
    in[v] = T++;
    for(auto &it: adj[v])
     if(visit[it.f] != st)
     {
        xors[it.f] = xors[v] ^ it.se;
        l[it.f] = l[v] + 1;
        dfs(it.f);
     }
    out[v] = T;
}
bool cmp_(node a,node b)
{
  if(a.k == b.k)
   return a.p < b.p;
  return a.k > b.k;
}
ll query(ll id,ll l,ll r,ll be,ll en)
{
   if(r<be or l>en)
     return 0;
   if(lazy[id] != 0)
   {
     tree[id]^= lazy[id];
     if(l != r)
     {
        lazy[2*id + 1]^= lazy[id];
        lazy[2*id + 2]^= lazy[id];
     }
     lazy[id] = 0;
   }
   if(be <= l and r <= en)
    return tree[id];
   ll mid = (l + r) / 2;
   return query(2*id + 1,l,mid,be,en) ^ query(2*id + 2,mid + 1,r,be,en);
}
void updatet(ll id,ll val,ll l,ll r,ll be,ll en)
{
  if(r<be or l>en)
    return;
  if(lazy[id] != 0)
  {
     tree[id]^= lazy[id];
     if(l != r)
     {
        lazy[2*id + 1]^= lazy[id];
        lazy[2*id + 2]^= lazy[id];
     }
     lazy[id] = 0;
  }
  if(be<=l and r<=en)
  {
     tree[id]^= val;
     if(l != r)
     {
         lazy[2*id + 1]^= val;
         lazy[2*id + 2]^= val;
     }
     return;
  }
  ll mid = (l + r) / 2;
  updatet(2*id + 1,val,l,mid,be,en);
  updatet(2*id + 2,val,mid + 1,r,be,en);
  tree[id] = tree[2*id + 1] ^ tree[2*id + 2];
}
void update(ll idx)
{
    ll v = (l[ed[idx].f.f] < l[ed[idx].f.se]) ? ed[idx].f.se : ed[idx].f.f;
    updatet(0,ed[idx].se,0,n-1,in[v],out[v] - 1);
}
int main()
{
   std::ios::sync_with_stdio(false);
   scanf("%lld",&t);
   while(t--){
   scanf("%lld",&n);
   ed.clear(),adj.clear();
   visit.rs(n),in.rs(n),out.rs(n),l.rs(n),tree.rs(4*n),xors.rs(n),lazy.rs(4*n),ed.rs(n-1),adj.rs(n);
   rep(i,0,4*n)
   {
      if(i < n)
       l[i] = xors[i] = visit[i] = in[i] = out[i] = 0;
      tree[i] = lazy[i] = 0;
   }
   st = 1,T = 0;
   rep(i,0,n-1)
   {
      scanf("%lld%lld%lld",&a,&b,&w);
      a--,b--;
      adj[a].pb({b,w}),adj[b].pb({a,w});
      ed[i].f.f = a,ed[i].f.se = b,ed[i].se = w;
 
   }
   sort(all(ed),cmp);
   dfs(0);
   scanf("%lld",&q);
   ans.clear();
   ans.rs(q);
   rep(i,0,q)
   {
      scanf("%lld%lld%lld",&L[i].l,&L[i].r,&L[i].k);
      L[i].l-=1,L[i].r-=1,L[i].p = i;
   }
   sort(L,L+q,cmp_);
   po = 0;
   rep(i,0,q)
   {
      while(po < n-1 and ed[po].se > L[i].k)
         update(po++);
      ans[L[i].p] = xors[L[i].l] ^ xors[L[i].r] ^ query(0,0,n-1,in[L[i].l],in[L[i].l]) ^ query(0,0,n-1,in[L[i].r],in[L[i].r]);
   }
   rep(i,0,q)  printf("%lld\n",ans[i]);
   }
   return 0;
}