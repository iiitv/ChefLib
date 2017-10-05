//made by hg398

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a[26],b[26];
		bool flag=true,f=false,f1=true;
		for(int i=0;i<26;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		string str,str1;
		cin>>str>>str1;
		for(int i=0;i<str.length();i++)
		{
			a[str[i]-'a']++;
			b[str1[i]-'a']++;
		}
		for(int i=0;i<26;i++)
	    {
	    	if(a[i]>=2&&b[i]==0)
	    	{
	    		flag=false;
	    		break;
	    	}
	    	if(a[i]==1&&b[i]==0)
	    		f=true;
	    }
	    if(f&&flag)
	    {
	    	for(int i=0;i<26;i++)
	    	{
	              if(b[i]>0&&a[i]>0)
	              {
	              	flag=false;
	              }
	              else if(b[i]>0&&a[i]==0)
	              {
	              	flag=true;
	              	break;
	              }
	              else
	              continue;
	        }
	    }
		if(flag)
		cout<<"B"<<endl;
		else
		cout<<"A"<<endl;
     }
	return 0;
} 
