#include <stdio.h>


int Cube(int base){
    int result = 1;
    for (int i = 0; i < 3; i++){
        result *= base;
    }

    return result;
}


int main() {

    printf("\nCube of Numbers from 1 to 10 are: ");

    for (int i = 1; i <= 10; i++){
        printf("\nCube of '%d' is : %d", i, Cube(i));
    }

    printf("\n");

    return 0;

}