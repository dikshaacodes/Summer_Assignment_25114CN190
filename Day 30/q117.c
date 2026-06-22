#include <stdio.h>

int main() {
    char name[50];
    int marks[3], total = 0;
    float percentage;
    int i;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks of 3 subjects:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 3.0;

    printf("\nStudent Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade: A+");
    else if(percentage >= 75)
        printf("Grade: A");
    else if(percentage >= 60)
        printf("Grade: B");
    else if(percentage >= 40)
        printf("Grade: C");
    else
        printf("Fail");

    return 0;
}