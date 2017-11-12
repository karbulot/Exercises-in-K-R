/*
 * Write a program to copy its input to its output, replacing each
 * tab by \ t, each backspace by \b, and each backslash by \ \. This makes tabs
 * and backspaces visible in an unambiguous way
 */
#include <stdio.h>

int main() {
    long c;
    c = 0;
    while ((c = getchar())!=EOF) {
        switch(c){
            case '\t':
                printf("\\t");
                break;
            case '\\':
                printf("\\\\");
                break;
            case '\b':
                printf("\\b");
                break;
            default:
                putchar(c);
        }
    }
    return 0;
}
