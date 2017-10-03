// Code written by Divyesh
#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		int o1, o2;
		long int m, e;
		scanf("%d %d", &o1, &o2);
		int a[o1*o2 + 10];
		int k, b, c, d=0, g, f=0, h, n=0, x=0;
		e = o1 * o2;
		k = o2;
		m = e;
		for (b = 0; b < o1 * o2; b++) {
			scanf("%d", &a[b]);
		}
		while (k--) {
			int p = 0;
			int j = 0;
			n = 0;
			x = 0;
			h = o1 * o2;
			for (g = f; h > 0; g++) {
				p++;
				j++;
				n = n + a[g % m];
				if (j % o2 == 0 && n >= (o2 / 2) + 1) {
					x++;
				}
				if (p % o2 == 0) {
					n = 0;
				}
				h--;
			}
			f++;
			if (x >= ((o1/2) + 1)) {
				printf("1\n");
				break;
			}
			if (k==0) {
				printf("0\n");
				break;
			}
		}
	}
}
