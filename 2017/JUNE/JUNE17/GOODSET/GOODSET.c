#
include < stdio.h >
    int main() {
        long T;
        scanf("%ld", & T);
        while (T--) {
            int n;
            scanf("%d", & n);
            int a[n], i;
            a[0] = 500;
            a[1] = 499;
            for (i = 2; i < n; i++) {
                a[i] = a[i - 1] - 1;
            }

            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");

        }

    }
