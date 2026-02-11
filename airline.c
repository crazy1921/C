#include <stdio.h>
#include <conio.h>

#define R 3
#define C 4

struct Booking {
    int row;
    int seat;
};

int seats[R][C] = {0};

void view() {
    int i, j;
    printf("\nSeat Layout (0 = Free, 1 = Booked)\n");
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
}

void book() {
    struct Booking b;

    printf("\nEnter Row: ");
    scanf("%d", &b.row);
    printf("Enter Seat: ");
    scanf("%d", &b.seat);

    b.row--;
    b.seat--;

    if(b.row < 0 || b.row >= R || b.seat < 0 || b.seat >= C || seats[b.row][b.seat]) {
        printf("Cannot book seat\n");
    } else {
        seats[b.row][b.seat] = 1;
        printf("Seat Booked: Row %d Seat %d\n", b.row + 1, b.seat + 1);
    }
}

void cancel() {
    struct Booking b;

    printf("\nEnter Row: ");
    scanf("%d", &b.row);
    printf("Enter Seat: ");
    scanf("%d", &b.seat);

    b.row--;
    b.seat--;

    if(b.row >= 0 && b.row < R && b.seat >= 0 && b.seat < C && seats[b.row][b.seat]) {
        seats[b.row][b.seat] = 0;
        printf("Seat Cancelled\n");
    } else {
        printf("Invalid seat\n");
    }
}

void report() {
    int i, j;
    int found = 0;

    printf("\nBooked Seats Report\n");
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            if(seats[i][j]) {
                printf("Row %d Seat %d\n", i + 1, j + 1);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("No seats booked\n");
    }
}

int main() {
    int ch;

    clrscr();   

    do {
        printf("\n----- Airline Seat Booking System -----\n");
        printf("1. View Seats\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Seat\n");
        printf("4. Report\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: view(); break;
            case 2: book(); break;
            case 3: cancel(); break;
            case 4: report(); break;
            case 5: printf("\nExiting...\n"); break;
            default: printf("\nInvalid choice\n");
        }

    } while(ch != 5);

    return 0;
}