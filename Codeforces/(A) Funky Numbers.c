#include <stdio.h>

int main() {
    int a, b;
    int n;
    int i,j;
    int ketemu=0;
    scanf("%d", &n);

    for(i=1; i*(i+1)<=2*n; i++) {
        b=(i*(i+1));
            for(j=1; j*(j+1)<=2*n-b; j++) {
                a=(j*(j+1));
                if((a+b)/2==n) {
                    printf("YES\n");
                    return 0;
                }
    //            printf("%d %d\n", i, j);
    //            printf("%lf %lf %lf\n", a, b, (a+b)/2.0);
            }
    }
    printf("NO\n");

    return 0;
}
