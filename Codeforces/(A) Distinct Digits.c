#include <stdio.h>

int main() {
    int angka[10]={};
    int l, r;
    int sisa;
    int hitung=0;
    int benar = 0;

    scanf("%d %d", &l, &r);
    
    for (int i=l; i<=r; i++) {
        int bil=i;
        int angka[10]={};
        while (bil>0) {
            sisa=bil%10;
            bil/=10;
            angka[sisa]++;
            //printf("index %d nilai %d\n", sisa, angka[sisa]);
        }
        for(int j=0; j<10; j++){
            if(angka[j]==1) {
                benar=1;
            } else if (angka[j]>1){
                benar=0;
                break;
            }
        }
        if (benar==1){
             printf("%d\n", i);
            return 0;
        }
    }
    if(benar==0) {
        printf("-1\n");
    }
}
