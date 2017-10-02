//Copyright: Manish Kumar, E&C, IIT Roorkee
#include <iostream>
#include <cmath>
#include <climits>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
#define ll long long
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define pin(n) printf("%d\n",n)
#define mem(A,i) memset(A, i, sizeof(A))
#define plln(n) printf("%lld\n",n)
#define pis(n) printf("%d ",n)
#define plls(n) printf("%lld ",n)
#define rep(i, start, end) for(int i=start; i<end; i++)
#define S second
#define F first
#define P pair<ll,ll>
#define PP pair<P,ll>
#define mod 1000000007
#define MAX 100005
#define s second
#define f first
#define newLine printf("\n")
ll n,m;
pair<int, pair<ll,ll> > arr[MAX];
ll ADD[MAX];
ll SUB[MAX];
ll A[MAX];
ll C;

ll add(ll &x, ll y){
  x=(x + y) % mod;
  if(x < 0) x += mod;
  return x;
}

int main()
{
   int t;
   si(t);
   while(t--){
      sll(n); sll(m);
      mem(ADD, 0);
      mem(SUB, 0);
      mem(A, 0);
      C = 1;
      rep(i,0,m){
        si(arr[i].f);
        sll(arr[i].s.f);
        sll(arr[i].s.s);
        arr[i].s.f--;
        arr[i].s.s--;
      }
      for(int i=m-1;i>=0;i--){ 
          add(C, ADD[i]);
          add(C, -1LL*SUB[i]);
          ADD[i] = C;
          if(arr[i].f == 2){
             if(arr[i].s.f > 0) add(SUB[arr[i].s.f-1], C);
             add(ADD[arr[i].s.s], C);
          }
      }
      mem(SUB, 0);
      rep(i, 0, m)
           if(arr[i].f == 1){
               if(arr[i].s.s < (n-1)) add(SUB[arr[i].s.s+1],ADD[i]);
               add(A[arr[i].s.f],ADD[i]);
           }
      C = 0;
      rep(i,0,n){
        add(C,A[i]);
        add(C,-1*SUB[i]);
        A[i]=C;
      }
      rep(i,0,n) plls(A[i]);
      newLine;
  }
  return 0;
     
}
