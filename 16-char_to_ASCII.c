#include <stdio.h>


int main() {

    printf("\nEnter an Alphabet or Digit: ");
    char a = getchar();


    if ((a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || (a >= 'a' && a <= 'z')){
        printf("\nASCII value of character '%c' is  = %d\n", a, a);
    }
    else {
        printf("\n[ERROR] please enter alphabets or digit only\n");
    }

}