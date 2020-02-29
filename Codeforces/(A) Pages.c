#include <stdio.h>

int main() {
    int n, p, k;
    int i, j;

    scanf ("%d %d %d", &n, &p, &k);

    if(p-k > 1) {
        printf("<< ");
    }
    for (i=1; i<=n; i++) {
        //if(p-k > 0) {
            if(i == p) {
                printf("(%d) ", p);
            } else {
                if(i>=p-k && i<=p+k) {
                    printf("%d", i);
                    if(i<p+k) {printf(" ");}
                }
            }
        //}
    }
    if(p+k < n) {
        printf(" >>");
    }
}
