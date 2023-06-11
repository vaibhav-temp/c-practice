#include <stdio.h>

const int CONVERSION_VALUE = 'a' - 'A';

int main() {

    printf("\nEnter an Alphabet: ");
    char a = getchar();


    if (a >= 'A' && a <= 'Z'){
        printf("\n'%c' After Case Change is '%c'\n", a, a + CONVERSION_VALUE);
    }
    else if (a >= 'a' && a <= 'z'){
        printf("\n'%c' After Case Change is '%c'\n", a, a - CONVERSION_VALUE);
    }
    else {
        printf("\n[ERROR] please enter alphabets only\n");
    }

}