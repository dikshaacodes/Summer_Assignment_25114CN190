#include <stdio.h>

int main() {
    int x, n, i;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("Answer = %lld", result);

    return 0;
}