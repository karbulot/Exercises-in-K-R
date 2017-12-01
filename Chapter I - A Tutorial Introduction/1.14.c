#include <stdio.h>
#define LENGTH '~'-' '
int main() {
    int c;
    int chars[LENGTH];
    int counter = 0;
    for (int i=0; i<LENGTH;i++){
        chars[i]=0;
    }
    while ((c=getchar()) != EOF){
        chars[c-' ']++;
    }
    for (int i=0; i<LENGTH; i++){
        printf("%c:\t",i+' ');
        for (int j=0; j<chars[i];j++){
            putchar('|');
        }
        putchar('\n');
    }
    return 0;
}
