#include <iostream>
#include <string>
#include <cmath> // std math library in C++

using namespace std;
typedef long int BIG;

int main()
{
   std::ios::sync_with_stdio(false); //for making FASTER I/O.

   int t;
   cin >> t;
   while(t--)
   {
   	 BIG n,i,j,count=1,b;
   	 cin >> n;
   	 if(n==0)
		{
			cout << 0 << endl;
		}

		else if(n==1)
		{
			cout << "INFINITY" << endl;
		}

		else if(n==2)
		{
			cout << 1 << endl;
		}

		else
		{
			for(i=3;i<=sqrt(n);i++)
			{	
				int x = ceil(log(n)/log(i));

				for(j=1;j<=x;j++)
				{
					if(n>=pow(i,j) && n<2*pow(i,j) )
					{
						count++;
					}

				}
			}
				cout << count+(n/2) << endl;
		}
		
	}
	
   }