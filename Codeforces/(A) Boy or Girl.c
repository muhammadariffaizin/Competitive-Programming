#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int size;
    int array[200]={};
    int bilangan=0;

    scanf("%s", text);
    size=strlen(text);

    for(int i=0; i<size; i++) {
        if(text[i]>=97&&text[i]<=122&&array[text[i]]==0) {
            array[text[i]]=1;
            bilangan++;
        }
    }
if(bilangan%2==0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}
