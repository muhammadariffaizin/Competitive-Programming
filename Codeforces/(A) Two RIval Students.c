#include <stdio.h>

int main() {
    int t;
    int n, x, a, b;
    int hasil;
    scanf("%d", &t);
    for (int i=0; i<t; i++) {
        scanf("%d %d %d %d", &n, &x, &a, &b);
        hasil = a - b;
        if(a-b<0) {hasil *= -1;}
        while (x>0 && hasil < n-1) {
            hasil++;
            x--;
        }
        printf("%d\n", hasil);
    }
}
