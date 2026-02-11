#include <stdio.h> 
int main() { 
int n, i;
float sum = 0, average;
int arr[100];
printf("Enter the number of elements: ");
scanf("%d", &n);

printf("Enter the elements: \n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);} 
for (i = 0; i < n; i++) { 
sum += arr[i]; 
} 
average = sum / n;  
printf("Sum of elements: %.2f\n", sum); 
printf("Average of elements: %.2f\n", average); 
return 0; 
}