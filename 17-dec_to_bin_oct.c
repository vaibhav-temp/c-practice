#include <stdio.h>

long long DecimalToBinary(int n) {

    long long bin = 0;
    int rem, i = 1;

    while (n!=0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

int DecimalToOctal(int decimalNumber) {

    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

int main() {

    printf("\nEnter a Decimal Number: ");
    int a;
    scanf("%i", &a);

    printf("\nDecimal Number'%d' is equal to Binary number = '%lld'", a, DecimalToBinary(a));
    printf("\nDecimal Number'%d' is equal to Octal number = '%d'\n", a, DecimalToOctal(a));

    return 0;

}