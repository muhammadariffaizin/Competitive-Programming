#include <stdio.h>
#include <string.h>

int main() {
    char stick[500];
    int a=0, b=0, c=0;
    int ind=0;

    scanf("%s", stick);

    for(int i=0; i<strlen(stick); i++) {
        if(stick[i]=='+' || stick[i]=='=') {
            ind++;
        }
        if(stick[i]=='|' && ind==0) {
            a++;
        } else if(stick[i]=='|' && ind==1) {
            b++;
        } else if(stick[i]=='|' && ind==2) {
            c++;
        }
    }
    if(a+b==c) {
        printf("%s", stick);
    } else if (a+b==c-2) {
        for(int i=0; i<a+1; i++) {
            printf("|");
        }
        printf("+");
        for(int i=0; i<b; i++) {
            printf("|");
        }
        printf("=");
        for(int i=0; i<c-1; i++) {
            printf("|");
        }
    } else if(a+b-2==c) {
        if(a-1>0) {
            for(int i=0; i<a-1; i++) {
                printf("|");
            }
            printf("+");
            for(int i=0; i<b; i++) {
                printf("|");
            }
        } else {
            for(int i=0; i<a; i++) {
                printf("|");
            }
            printf("+");
            for(int i=0; i<b-1; i++) {
                printf("|");
            }
        }
        printf("=");
        for(int i=0; i<c+1; i++) {
            printf("|");
        }
    } else {
        printf("Impossible");
    }
    printf("\n");
}
