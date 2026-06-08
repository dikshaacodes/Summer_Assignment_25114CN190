#include <stdio.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, rem;

    while(temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp = temp / 10;
    }

    return (sum == n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}