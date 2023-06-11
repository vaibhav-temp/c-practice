#include <stdio.h>


int main() {

    printf("\nEnter the Character: ");

    char a = getchar();

    if (a >= 'A' && a <= 'Z'){
        printf("\nInputed Character '%c' is an Uppercase Character.\n", a);
    }
    else if (a >= 'a' && a <= 'z'){
        printf("\nInputed Character '%c' is a Lowercase Character.\n", a);
    }
    else if (a >= '0' && a <= '9'){
        printf("\nInputed Character '%c' is a Digit.\n", a);
    }
    else {
        printf("\nInputed Character '%c' is a Special Symbol.\n", a);
    }

    return 0;

}