// Code written by Monal
#include "iostream"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int tc;
	cin>>tc;
	while (tc--) {
		int a,b;
		cin>>a>>b;
		int tmp1=1,tmp2=2;
		int chance = 0;
		while (1) {
			if (!chance) {
				if (a-tmp1<0) {
					cout<<"Bob\n";
					break;
				}
				else {
					a -= tmp1;
					tmp1 += 2;
				}
				chance=1;
			}
			else {
				if (b-tmp2<0) {
					cout<<"Limak\n";
					break;
				}
				else {
					b-=tmp2;
					tmp2 += 2;
				}
				chance=0;
			}
		}
	}
	return 0;
}
