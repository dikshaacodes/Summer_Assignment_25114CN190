#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice, sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Sum\n");
    printf("2. Maximum\n");
    printf("3. Display\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        case 2:
            max = arr[0];

            for(i = 1; i < n; i++) {
                if(arr[i] > max)
                    max = arr[i];
            }

            printf("Maximum = %d", max);
            break;

        case 3:
            printf("Array Elements:\n");

            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}