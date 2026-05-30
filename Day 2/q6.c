#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        num = -num;  // make it positive
    }

    while(num != 0) {
        digit = num % 10;              // extract last digit
        reverse = reverse * 10 + digit; // build reversed number
        num = num / 10;                // remove last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}