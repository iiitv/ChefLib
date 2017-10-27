//Made by Divyesh Puri
#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, i, k = 100000, index;
		scanf("%d", &n);
		int arr[n];
		for (i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			if (arr[i] < k){
				k = arr[i];
				index = i;
			}
		}
		printf("%d\n",index + 1);
	}
}
