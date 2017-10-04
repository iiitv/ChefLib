//Code Copyright: Sanskar Jain, Software Engineering 2nd Year, DTU

#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		map<char,int> c,d;
		map<char,int>::iterator it;
		string a,b;
		int e[26],f[26],g[501],h[501];
		memset(e,0,sizeof(e));
		memset(f,0,sizeof(f));
		memset(g,0,sizeof(g));
		memset(h,0,sizeof(h));
		cin>>a>>b;
		if(a==b){
			cout<<"B\n";
			continue;
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(a==b){
			cout<<"B\n";
			continue;
		}
		for(int i=0;i<a.length();i++){
			e[a[i]-97]++;
			if(c.find(a[i])!=c.end()){
				c[a[i]]++;
			}
			else{
				c.insert(pair<char,int>(a[i],1));
			}
		}
		for(int i=0;i<b.length();i++){
			f[b[i]-97]++;
			if(d.find(b[i])!=d.end()){
				d[b[i]]++;
			}
			else{
				d.insert(pair<char,int>(b[i],1));
			}
		}
		for(int i=0;i<26;i++){
			g[e[i]]++;
			h[f[i]]++;
		}
		char winner='B';
		int flag=0;
		for (it=c.begin(); it!=c.end(); ++it){
			if(it->second>=2&&d.find(it->first)==d.end()){
				winner='A';
				goto result;
			}
		}
		for (it=c.begin(); it!=c.end(); ++it){
			if(d.find(it->first)==d.end()){
				flag=1;
			}
		}
		if(flag==0){
			winner='B';
			goto result;
		}
		for(int i=0;i<26;i++){
			if(f[i]==1&&e[i]==0){
				winner='B';
				goto result;
			}
		}
		flag=0;
		if(g[1]!=0){
			for (it=d.begin(); it!=d.end(); ++it){
				if(c.find(it->first)==c.end()){
					flag=1;
				}
			}
			if(flag==0){
				winner='A';
				goto result;
			}
		}
		result:
		cout<<winner<<"\n";}
	return 0;
}
