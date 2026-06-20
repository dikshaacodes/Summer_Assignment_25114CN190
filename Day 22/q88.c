#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;
    char result[100];

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String without spaces: %s", result);

    return 0;
}