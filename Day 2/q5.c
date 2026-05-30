#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        num = -num;  // make it positive
    }

    while(num != 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}