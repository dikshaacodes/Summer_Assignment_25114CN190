#include <stdio.h>

int main() {
    int a[100], b[100];
    int n, i, flag = 1;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first sorted array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second sorted array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Arrays Match");
    else
        printf("Arrays Do Not Match");

    return 0;
}