#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        num = -num;  // make it positive
    }

    while(num != 0) {
        digit = num % 10;      // get last digit
        product = product * digit; // multiply digits
        num = num / 10;        // remove last digit
    }

    printf("Product of digits = %d\n", product);

    return 0;
}