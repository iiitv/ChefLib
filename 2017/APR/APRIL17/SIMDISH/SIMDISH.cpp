// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <bits/stdc++.h>
#include <stdio.h>
#include <string>

using namespace std;

#define mod(x)			x%1000000007;
#define MIN( n1, n2 )	((n1) > (n2) ? (n2) : (n1))
#define MAX( n1, n2 )	((n1) > (n2) ? (n1) : (n2))
#define MID(s,e)		(s+(e-s)/2)
#define FOR(i,a,b)		for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) 	for(int i=(a);i>=(b);i--)
#define show(a)			for(i=0;i<a.size();i++) cout<<a[i]<<" ";
#define get(a)			for(i=0;i<a.size();i++) cin>>a[i];
#define p printf
#define scanint(a)		scanf("%d",&a)
#define scanLLD(a)		scanf("%lld",&a)
#define scanstr(s)		scanf("%s",s)
#define scanline(l) 	scanf(" %[^\n]",l);

typedef long int BIG;
typedef long long PAPA;

int main()
{
	std::ios_base::sync_with_stdio(false);
	int t;
	scanint(t);
	while(t--) {
		int res = 0;
		char s11[200], s12[200], s13[200], s14[200], s21[200], s22[200], s23[200], s24[200];
		cin >> s11 >> s12 >> s13 >> s14 >> s21 >> s22 >> s23 >> s24;
		if(strcmp(s11,s21)==0) res++;
		if(strcmp(s11,s22)==0) res++;
		if(strcmp(s11,s23)==0) res++;
		if(strcmp(s11,s24)==0) res++;
		if(strcmp(s12,s21)==0) res++;
		if(strcmp(s12,s22)==0) res++;
		if(strcmp(s12,s23)==0) res++;
		if(strcmp(s12,s24)==0) res++;
		if(strcmp(s13,s21)==0) res++;
		if(strcmp(s13,s22)==0) res++;
		if(strcmp(s13,s23)==0) res++;
		if(strcmp(s13,s24)==0) res++;
		if(strcmp(s14,s21)==0) res++;
		if(strcmp(s14,s23)==0) res++;
		if(strcmp(s14,s22)==0) res++;
		if(strcmp(s14,s24)==0) res++;
		if(res>=2) printf("similar\n");
		else printf("dissimilar\n");
	}
	return 0;
}
