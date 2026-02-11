#include <stdio.h> 
void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) { 
if (n == 1) { 
printf("Move disk 1 from %c to %c\n", fromRod, toRod); 
return; 
} 
towerOfHanoi(n - 1, fromRod, auxRod, toRod); 
printf("Move disk %d from %c to %c\n", n, fromRod, toRod); 
towerOfHanoi(n - 1, auxRod, toRod, fromRod); 
} 
int main() { 
int numDisks; 
// Input: Number of disks 
printf("Enter the number of disks: "); 
scanf("%d", &numDisks); 
// Solve Tower of Hanoi 
printf("The sequence of moves to solve Tower of Hanoi is:\n"); 
towerOfHanoi(numDisks, 'A', 'C', 'B');
return 0; 
} 