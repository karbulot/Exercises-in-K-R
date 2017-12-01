#include <stdio.h>
#define MAXLEN 30
int main() {
    int c;
    int wordlengths[MAXLEN];
    int counter = 0;
    for (int i=0; i<MAXLEN;i++){
        wordlengths[i]=0;
    }
    while ((c=getchar()) != EOF){
        if (c==' '||c=='\n'||c=='\t'){
            if (counter>0){
                wordlengths[counter]++;
                counter=0;
            }
        } else {
            counter++;
        }
    }
    for (int i=0; i<MAXLEN; i++){
        printf("%d\t",i);
        for (int j=0; j<wordlengths[i];j++){
            putchar('|');
        }
        putchar('\n');
    }
    return 0;
}
