#include <bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define pb push_back
#define si second
#define int long long
#define mod 1000000007
#define debug(x) cout << #x << " " << x <<endl;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define double long double
#define all(o) o.begin(),o.end()
using namespace std;
int power(int x, int y)
{
    int res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res%mod;
}
int inv(int  n)
{
    return power(n,mod-2)%mod;
}
int n,q,a,b,x,y,ele,ind;

struct node{
	int pre,suf,len,sub,ones;
};
node merge(node &a,node &b){
	node x;
	x.len=a.len+b.len;
	x.ones=a.ones+b.ones;
	x.sub=a.sub+b.sub+a.suf*b.pre;
	if(a.ones==a.len)
		x.pre=a.ones+b.pre;
	else x.pre=a.pre;
	if(b.ones==b.len)
		x.suf=b.ones+a.suf;
	else x.suf=b.suf;
	return x;
}
node  get(int val){
	node x={0,0,0,0,0};
	x.len=1;
	if(val)
	{
		x.ones=1;
		x.pre=1;
		x.suf=1;
		x.sub=1;
	}
	return x;
}
node t1[3000005],t2[3000005];

void build1(int v,int l,int r){
	if(l==r){
		t1[v]=get(1);
		return ;
	}
	int mid=(l+r)/2;
	build1(2*v,l,mid);
	build1(2*v+1,mid+1,r);
	t1[v]=merge(t1[2*v],t1[2*v+1]);
}
void build2(int v,int l,int r){
	if(l==r){
		t2[v]=get(1);
		return ;
	}
	int mid=(l+r)/2;
	build2(2*v,l,mid);
	build2(2*v+1,mid+1,r);
	t2[v]=merge(t2[2*v],t2[2*v+1]);
}
void upd1(int v,int l,int r){
	if(l==r){
		t1[v]=get(ele);
		return ;
	}
	int mid=(l+r)/2;
	if(ind<=mid)
		upd1(2*v,l,mid);
	else upd1(2*v+1,mid+1,r);
	t1[v]=merge(t1[2*v],t1[2*v+1]);	
}
void upd2(int v,int l,int r){
	if(l==r){
		t2[v]=get(ele);
		return ;
	}
	int mid=(l+r)/2;
	if(ind<=mid)
		upd2(2*v,l,mid);
	else upd2(2*v+1,mid+1,r);
	t2[v]=merge(t2[2*v],t2[2*v+1]);	
}
node qry1(int v,int ss,int se,int qs,int qe){
	if(qs>se || qe<ss)
		return get(0);
	if(ss==qs && se==qe)
		return t1[v];
	int mid=(ss+se)/2;
	node r1=qry1(2*v,ss,mid,qs,min(qe,mid));
	node r2=qry1(2*v+1,mid+1,se,max(qs,mid+1),qe);
	return merge(r1,r2);
}
node qry2(int v,int ss,int se,int qs,int qe){
	if(qs>se || qe<ss)
		return get(0);
	if(ss==qs && se==qe)
		return t2[v];
	int mid=(ss+se)/2;
	node r1=qry2(2*v,ss,mid,qs,min(qe,mid));
	node r2=qry2(2*v+1,mid+1,se,max(qs,mid+1),qe);
	return merge(r1,r2);
}
int32_t main(){
	fast
	cin>>n>>q>>a>>b;
	a--;
	build1(1,1,n);
	int i;
	build2(1,1,n);
	while(q--){
		int op;
		cin>>op>>x>>y;
		if(op==1){
			ind =x;
			if(y<=b)
				ele=1;
			else
				ele=0;
			upd1(1,1,n);
			if(y<=a)
				ele=1;
			else ele=0;
			upd2(1,1,n);
		}
		else{

			node p=qry1(1,1,n,x,y);
			node q=qry2(1,1,n,x,y);
			cout<<p.sub-q.sub<<"\n";
		}


	}


}




