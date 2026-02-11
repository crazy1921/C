#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 5
#define RATE 20

struct Vehicle {
    char number[15];
    int entry;
};

struct Vehicle park[MAX];
int count = 0;

void add() {
    if(count == MAX) {
        printf("Parking Full\n");
        return;
    }

    printf("Vehicle Number[EG:KA XX AA XXXX]: ");
    scanf("%s", park[count].number);


    printf("Entry Time (hour 0-23): ");
    scanf("%d", &park[count].entry);


    count++;
    printf("Vehicle Parked\n");
}

void removeV() {
    char num[15];
    int i, exitTime, hours;

    printf("Vehicle Number: ");
    scanf("%s", num);


    for(i = 0; i < count; i++) {
	if(strcmp(park[i].number, num) == 0) {

	    printf("Exit Time (hour 0-23): ");
	    scanf("%d", &exitTime);


	    hours = exitTime - park[i].entry;
	    if(hours <= 0) hours = 1;

	    printf("Fee = Rs.%d\n", hours * RATE);

	    park[i] = park[count - 1];
	    count--;
	    return;
	}
    }

    printf("Vehicle Not Found\n");
}

void display() {
    int i;

    if(count == 0) {
	printf("No Vehicles Parked\n");
	return;
    }

    for(i = 0; i < count; i++)
	printf("%s  Entry:%d\n", park[i].number, park[i].entry);
}

void main() {
    int ch;

    clrscr();

    do {
	printf("\n=== SMART PARKING SYSTEM ===\n");
	printf("1.Add \n 2.Remove\n  3.Display\n  4.Exit\n");
	printf("Choice: ");
	scanf("%d", &ch);


	switch(ch) {
	    case 1: add(); break;
	    case 2: removeV(); break;
	    case 3: display(); break;
	    case 4: printf("Exiting...\n"); break;
	    default: printf("Invalid Choice\n");
	}

    } while(ch != 4);
}