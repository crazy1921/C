#include <stdio.h> 
#include <string.h> 
void reverseString(char* str) { 
char* start = str; 
char* end = str + strlen(str) - 1; 
char temp; 
while (start < end) { 
temp = *start; 
*start = *end; 
*end = temp; 
start++; 
end--; 
} 
} 
int main() { 
char str[100]; 
printf("Enter a string: "); 
scanf("%s", str); 
reverseString(str); 
printf("Reversed string: %s\n", str);
return 0;
}