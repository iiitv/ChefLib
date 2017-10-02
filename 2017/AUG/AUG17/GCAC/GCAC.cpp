
#include<iostream>
#include<string>
using namespace std;
int main()
{
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 
	 long int test,n,m,minsalary[1001]={0},offeredsal[1001][2]={0},i,j,k,candjob=0,totsal=0,sal=0,indi=0,fcomp=0;
	 string str;
	 
	 cin>>test;
	 
	 for(test=test;test > 0;test--)
	 {
	 	int arr[1001]={0};
	 	cin>>n>>m;
	 	
	 	for(i=0;i<n;i++)
	 		cin>>minsalary[i];
	 
	 	for(i=0;i<m;i++)
	 		cin>>offeredsal[i][0]>>offeredsal[i][1];
	 	
	 	cin.ignore();
	 		
	 	for(j=0;j<n;j++)
	 	{
	 	
	 		cin>>str;
	 		
	 		
	 		for(i=0;i<m;i++)
	 		{
	 			if(str[i] == '1')
	 			{
	 				if(offeredsal[i][1])
	 				{
	 					if(offeredsal[i][0] >= minsalary[j])
	 					{
							if(sal < offeredsal[i][0]){
							sal = offeredsal[i][0];	indi = i;}
	 					}
	 				}
	 			}
	 		}
	 		
	 		if(sal)
	 		{
	 			candjob++;	totsal = totsal + offeredsal[indi][0];	offeredsal[indi][1]--;	arr[indi] = 1;
	 		}
	 		sal = 0;
	 		
	 	}
	 	
	 		for(i=0;i<m;i++)
	 		{
	 			if(arr[i] == 0)
	 				fcomp++;
	 		}
	 		
	 		
	 		cout<<candjob<<" "<<totsal<<" "<<fcomp<<"\n";
	 		
	 		fcomp =	totsal = candjob =  0;	
 
	 }
	 
}

//by bevish
