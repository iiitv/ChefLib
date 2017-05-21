
#include <iostream>
using namespace std;
typedef long long int lli;

int main() {
	
	long long int t;
	cin >> t;
	while(t--) {
     long long int i,n;
     cin>>n;
	long long int a[n],c1=0,c2=0;
	for(i=0;i<n;i++) {
          cin>>a[i];
          if(a[i]==0&& c2==0) {
               c2++;
               c1 =  n-i;
          }
          if(a[i]==0 && c2!=0)        
          c2++;
     }
     cout<<c1-c2+1<<"\n";
     }
	return 0;
}