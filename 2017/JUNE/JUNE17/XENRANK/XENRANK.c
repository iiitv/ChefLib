// this code is copyright of Mohak Khare
#include < stdio.h >
    int main() {

        long t;
        scanf("%ld", & t);
        while (t--) {
            long i, a[2];
            for (i = 0; i < 2; i++) {
                scanf("%ld", & a[i]);
            }
            long long k, r, ans;
            k = a[0] + a[1];

            r = (k * k + k + 2) / 2;
            ans = r + a[0];

            printf("%lld\n", ans);

        }

    }
