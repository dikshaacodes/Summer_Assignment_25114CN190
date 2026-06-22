#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Length\n");
    printf("2. Reverse\n");
    printf("3. Uppercase\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reversed String = %s", str);
            break;

        case 3:
            for(int i = 0; str[i] != '\0'; i++) {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
            }

            printf("Uppercase String = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}