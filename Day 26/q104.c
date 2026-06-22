#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Score = %d/3", score);

    return 0;
}