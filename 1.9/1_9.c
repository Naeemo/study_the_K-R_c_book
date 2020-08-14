#include <stdio.h>

#define NONE_BLANK 'n';

int main() {
    int c, prev_c;

    prev_c = NONE_BLANK;

    while ((c = getchar()) != EOF) {
        if (prev_c !=' ' || c != ' ') {
            putchar(c);
            prev_c = c;
        }
    }

}
