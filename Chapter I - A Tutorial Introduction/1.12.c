/*
 * Write a program that prints its input one word per line.
 */

#include <stdio.h>
#define IN 1
#define OUT 2

int main() {
    int c, state;
    state = 0;
    while ((c=getchar()) != EOF){
        if (c==' '||c=='\n'||c=='\t'){
            if (state==IN){
                putchar(c);
            }
            state = OUT;
        } else {
            if (state==OUT){
                state = IN;
                putchar('\n');
            }
            state=IN;
            putchar(c);
        }
    }
    return 0;
}
