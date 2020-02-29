#include <stdio.h>

int main() {
    long long n, w, k, mins=0, cost;

    scanf("%lld %lld %lld", &k, &n, &w);

    for (int i=1; i<=w; i++) {
        mins+=i;
    }
    mins*=k;

    if(mins>n) {
        cost = mins-n;
    } else {
        cost = 0;
    }
    printf("%lld\n", cost);
}
