#include <stdio.h>

int isPalindrome(int n) {
    int temp = n, rev = 0, rem;

    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    return (n == rev);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome Number");
    else
        printf("Not Palindrome");

    return 0;
}