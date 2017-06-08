#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Gerrymander CodeChef Feb Long 2017
// wrong answer


void Display(int a[],int n)
{	int l;
	for(l=0;l<n;l++){
		printf("%d ",a[l]);
 
	}
}

typedef long long int lli;
typedef long int li;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		li o1,o2,OneCount=0;
		scanf("%ld %ld",&o1,&o2);
		lli size = o1*o2;
		int a[size],i,j;
		
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
			OneCount += a[i];
		}
		
		if(o1==1){
			if(OneCount>o2/2)
				printf("1\n");
			else if(OneCount< o2/2)
				printf("0\n");
		}

		else if(o2==1){
			if(OneCount>o1/2)
				printf("1\n");
			else if(OneCount < o1/2)
				printf("0\n");
		}

		else if(OneCount < (o1/2+1)*(o2/2+1))
		{
			printf("0\n");
			break;
		}
		
		else if(o2>1){
			int news=size+o2-1;
			int newa[news];
			for(i=0;i<news;i++){
				if(i<size)
					newa[i] = a[i];
				else
					newa[i] = a[i-size];
			}

			// o1 = no of cities
			// o2 = seats in each city

			int b;
			for(b=0;b<o2;b++)
			{
				int votes[o1],i;
				for(i=b;i<o1+b;i++){
				int count = 0;
				for(j=(i-b)*o2;j<(i+1-b)*o2;j++){
					count += newa[j];
				}
				if(count>(o2/2))
					votes[i] = 1;
				else if (count<(o2/2))
					votes[i] = 0;
			}

			int flag = 0;
			for(i=0;i<o1;i++){
				flag+= votes[i];
			}

			if(flag > o1/2){
				printf("1\n");
				break;
			}
			else if(flag < o1/2){
				printf("0\n");
				break;
			}
				
			}
			

			//Display(new,news);
		}
		
	}
	return 0;
}