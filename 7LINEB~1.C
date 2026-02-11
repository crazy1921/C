#include <stdio.h> 
void linearSearch(int arr[], int n, int target) {
int i;
for (i = 0; i < n; i++) {
if (arr[i] == target) {
printf("Element %d found at index %d\n", target, i);
return;
}
}
printf("Element %d not found\n", target);
}
void binarySearch(int arr[], int n, int target) {
int low = 0, high = n - 1, mid;
while (low <= high) {
mid = (low + high) / 2;
if (arr[mid] == target) {
printf("Element %d found at index %d\n", target, mid);
return;
} else if (arr[mid] < target)
low = mid + 1;
else
high = mid - 1;
}
printf("Element %d not found\n", target);
}
int main() {
int arr[100],n,choice,target,i,j,t;
clrscr();
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements: \n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("\n MENU \n");
printf("1. Linear Search\n");
printf("2. Binary Search\n");
scanf("%d", &choice);
printf("Enter the element to search for: ");
scanf("%d", &target);
switch (choice) {
case 1:
linearSearch(arr, n, target);
break;
case 2:
for (i = 0; i < n-1; i++) {
for (j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j+1]) {
t = arr[j];
arr[j] = arr[j+1];
arr[j+1] = t;
}
}
}
binarySearch(arr, n, target);
break;
default:
printf("Invalid choice.\n");
}
getch();
return 0;
}