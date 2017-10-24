// made by Divyesh Puri
#include <stdio.h>
int main()	{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int arr[n + 1];
		int i, j, k, l;
		for(i = 1; i <= n; i++) {
			arr[i] = i;
		}
		if (n % 2 == 0)	{
			for(i = 1; i < n; i += 2) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		else {
			for(i = 1; i < n; i += 2) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			j = arr[n - 1];
			arr[n - 1] = arr[n];
			arr[n] = j;	
		}
		for(i = 1; i <= n; i++) {
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}
