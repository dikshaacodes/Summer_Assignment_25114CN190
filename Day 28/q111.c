#include <stdio.h>

int main() {
    int seats = 50, booked;

    printf("Total Seats Available = %d\n", seats);

    printf("Enter number of seats to book: ");
    scanf("%d", &booked);

    if(booked <= seats) {
        seats = seats - booked;

        printf("Booking Successful\n");
        printf("Remaining Seats = %d", seats);
    }
    else {
        printf("Seats not available");
    }

    return 0;
}