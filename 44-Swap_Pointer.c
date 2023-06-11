#include <stdio.h>


void Swap(float* a, float* b){
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}


int main() {

    float a = 44.5 , b = 78.6;

    printf("\nBefore Swap --> a = %.2f  and  b = %0.2f\n", a, b);
    
    Swap(&a, &b);
    
    printf("\nAfter Swap --> a = %.2f  and  b = %0.2f\n", a, b);

}