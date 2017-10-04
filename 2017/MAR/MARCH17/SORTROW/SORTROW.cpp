// Code written by Monal
#include"bits/stdc++.h"
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			scanf("%d",&arr[i][j]);
	for(int i=0;i<n;++i)
		sort(arr[i],arr[i]+n);
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}
