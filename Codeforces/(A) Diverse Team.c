#include <stdio.h>

int main() {
    int k, n;
    int hitung=0;

    scanf("%d%d", &k, &n);
    int input[k];
    int hasil[k];

    for(int i=0; i<k; i++) {
        scanf("%d", &input[i]);
        hasil[i] = i;
    }
    for(int i=0; i<k; i++) {
        for(int j=0; j<k; j++) {
            if(i!=j) {
                if(input[i]==input[j]) {
                    input[j]=-j;
                    hasil[j]=-1;
                    //printf("%d %d input %d\n",i,j, input[j]);
                    hitung++;
                }
            }
        }
    }
    hitung=k-hitung;

    if(hitung>=n) {
        printf("YES\n");
        for(int i=0; i<n; i++) {
            if(hasil[i]>=0) {
                printf("%d", i+1);
                if(i<n-1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
            if(hasil[i]<0) {
                n++;
            }
        }
        for(int i=0; i<n; i++) {
            if(hasil[i]<0) {
                n--;
            }
        }
    } else {
        printf("NO\n");
    }
    //printf("%d %d", n, hitung);
}
