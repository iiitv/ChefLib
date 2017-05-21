#include <bits/stdc++.h>

using namespace std;
typedef long int BIG;

int MIN(BIG x, BIG y){
	if(x>y){
		return y;
	}
	else{
		return x;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		BIG n,i,j;
		scanf("%ld",&n);
		BIG x[n],y[n];
		for(i=0;i<n;i++){
			scanf("%ld",&x[i]);
		}
		for(j=0;j<n;j++){
			scanf("%ld",&y[j]);
		}
		BIG p1 = 0 ,p2 = 0;
		for(i=0;i<n;i++){
			if(i%2 == 0){
				p1 = p1 + x[i];
				p2 = p2 + y[i];
			}
			else{
				p1 = p1 + y[i];
				p2 = p2 + x[i];
			}
		}
		printf("%ld\n",MIN(p1,p2));
	}
	return 0;	
}