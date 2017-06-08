#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int lli;

//MAKETRI CC FEB LONG 2017
// A.Rathi

int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
     lli i,n;

     cin>>n;
	lli a[n],c1=0,c2=0;
	for(i=0;i<n;i++)
	{cin>>a[i];
     if(a[i]==0 && c2==0)
     {c2++;
      c1 =  n-i;
     }
     if(a[i]==0 && c2!=0)        
     c2++;
     }
     cout<<c1-c2+1<<"\n";
     }
	return 0;
}