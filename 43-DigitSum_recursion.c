#include <stdio.h>


int Digit_Sum(int n){
    if (n <= 0)
        return 0;
    return n % 10 + Digit_Sum(n / 10);
}


int main() {

    printf("\nEnter a Number to find sum of digits : ");
    int num;
    scanf("%i", &num);
   
    printf("\nSum of Digits of Number '%d' = %d\n", num, Digit_Sum(num));

    return 0;

}