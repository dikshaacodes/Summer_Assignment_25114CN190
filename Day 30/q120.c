#include <stdio.h>

void display(int roll, char name[], int marks[]) {
    int total = 0;
    float percentage;
    int i;

    for(i = 0; i < 3; i++)
        total += marks[i];

    percentage = total / 3.0;

    printf("\nStudent Report\n");
    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
}

int main() {
    int roll;
    char name[50];
    int marks[3];
    int i;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter marks of 3 subjects:\n");

    for(i = 0; i < 3; i++)
        scanf("%d", &marks[i]);

    display(roll, name, marks);

    return 0;
}