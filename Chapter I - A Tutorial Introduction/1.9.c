/*
 * Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main() {
    long c;
    c = 0;
    while ((c = getchar())!=EOF) {
        if (c == ' '){
            putchar(' ');
            while ((c=getchar())==' ') ;
        }
        putchar(c);
    }
    return 0;
}
