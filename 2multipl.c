#include <stdio.h> 
int main() { 
int i,j,n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for (i = 1; i <= n; i++) { 
for (j = 1; j <= 10; j++) { 
printf("%d\t", i * j);
} 
printf("\n");
} 
return 0; 
} 
