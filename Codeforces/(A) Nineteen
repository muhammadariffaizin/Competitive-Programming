#include <stdio.h>
#include <string.h>

int main() {
    char teks[100];
    int ketemu;

    //nineteen
    //n = 3
    //i = 1
    //e = 3
    //t = 1
    int n, i, e, t;
    n=0; i=0; e=0; t=0;
    scanf("%s", teks);
    int panjang;
    panjang = strlen(teks);
    for(int j=0; j<panjang; j++) {
        switch(teks[j]) {
            case 'n' :
                n++;
                break;
            case 'i' :
                i++;
                break;
            case 'e' :
                e++;
                break;
            case 't' :
                t++;
                break;
        }
    }
    ketemu = 0;
    //printf("%d %d %d %d\n", n, i, e, t);
    while(n>=3 && i>=1 && e>=3 && t>=1) {
        n -= 2;
        i -= 1;
        e -= 3;
        t -= 1;
        ketemu++;
    }

    printf("%d\n", ketemu);
    //printf("%d %d %d %d", n, i, e, t);
}
