//Code Copyright: Manish Kumar, E&C 4th Year, IIT Roorkee
#include <iostream>
#include <cstring>
#include <cmath>
#include <stack>
using namespace std;
#define ll long long
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define pin(n) printf("%d\n",n)
#define plln(n) printf("%lld\n",n)
#define pis(n) printf("%d ",n)
#define plls(n) printf("%lld ",n)
#define rep(i, start, end) for(int i=start; i<end; i++)
#define S second
#define F first
#define P pair<int,int>
#define PP pair<P,int>
#define mod 1000000007
#define MAX 100005
#define block 100
#define newLine printf("\n")
 
ll countt[1001][block];
ll last[1001][block];
ll Parent[1001][block];

ll n,q;
ll arr[MAX];
ll lazy[1005];
void blockUpdate(ll blockNum){
	int l=blockNum*100;
	int r=min((ll)l+99LL,n-1);
	stack<pair<ll,ll> > S;
	while(r>=l){
		ll curr=arr[r]+lazy[r/100];
		while(!S.empty() && S.top().first<=curr){
			S.pop();
		}
		if(S.empty()){
			countt[r/100][r%100]=0;
			last[r/100][r%100]=r;
		}
		else{
			pair<ll,ll> temp=S.top();
			countt[r/100][r%100]=countt[temp.second/100][temp.second%100]+1;
			last[r/100][r%100]=last[temp.second/100][temp.second%100];
		}
		S.push({curr,r});
		r--;
	}
}
int query(int index, int jump){
	if(jump==0) return index;
	int currBlock=index/100;
	int maxxJ=countt[currBlock][index%100];
	if(maxxJ>=jump){
		int currJump=0;
		int lastMax=index;
		ll lastValue=arr[index]+lazy[index/100];
		for(int i=index+1; i<=last[currBlock][index%100]; i++){
			if(currJump==jump) return lastMax;
			ll currVal=arr[i]+lazy[i/100];
			if(currVal > lastValue){
				currJump++;
				lastValue=currVal;
				lastMax=i;
			}
		}
		return lastMax;
	}
	else{
		int finalInd=last[currBlock][index%100];
		if(currBlock==((n-1)/100) || Parent[currBlock][finalInd%100]==finalInd) return finalInd;
		if((Parent[currBlock][finalInd%100]-finalInd)>100){
			return finalInd;
		}
		int x=jump-maxxJ-1;
		return query(Parent[currBlock][finalInd%100], x);
	}
}
void blockUpdate2(int blockNum){
	if(blockNum<0 || blockNum==((n-1)/100)) return;
	int j=(blockNum+1)*100;
	int la=j+100;
	int i=j-1;
	while(i>=(blockNum*100)){
		if(last[i/100][i%100]!=i){
			int qqq=last[i/100][i%100];
			Parent[i/100][i%100]=Parent[qqq/100][qqq%100];
			i--;
			continue;
		}
		while(j<la && (arr[j]+lazy[j/100])<=(arr[i]+lazy[i/100])) j++;
		if(j==la){
			Parent[i/100][i%100]=i;
		}
		else{
			Parent[i/100][i%100]=j;
		}
		i--;
	}
}
void update(int left, int right, ll value){
	if((left/100)!=(right/100)){
		for(int i=(left/100)+1; i<(right/100); i++) lazy[i]+=value;
		for(int i=left; i<=((left/100)*100+99); i++) arr[i]+=value;
		for(int i=right; i>=((right/100)*100); i--) arr[i]+=value;
		blockUpdate(right/100);
		blockUpdate(left/100);
		blockUpdate2(right/100);
		blockUpdate2((right/100)-1);
		blockUpdate2(left/100);
		blockUpdate2((left/100)-1);
	}
	else{
		for(int i=left; i<=right; i++) arr[i]+=value;
		blockUpdate(right/100);
		blockUpdate2(right/100);
		blockUpdate2((right/100)-1);
	}
}
void build(){
	for(int i=0; i<=((n-1)/100); i++) blockUpdate(i);
	for(int i=0; i<=((n-1)/100); i++) blockUpdate2(i);
}
int main(){
	sll(n);
	sll(q);
	rep(i,0,n){
		sll(arr[i]);
	}
	build();
	rep(qqqq,0,q){
		int a; si(a);
		if(a==1){
			si(a);
			int k;
			si(k);
			a--;
			pin(1+query(a,k));
		}
		else{
			si(a);
			int b;
			ll c;
			si(b);
			sll(c);
			a--;b--;
			update(a, b, c);
		}
	}
	return 0;
}
