#include<stdio.h> 
int main() 
{ 
char ch; 
char str[50]; 
char sentence[100]; 
// Read a single character 
printf("Enter a character: "); 
scanf("%c", &ch); 
// Read a string (no spaces) 
printf("Enter a string (one word): "); 
scanf("%s", str); 
// Read a full sentence (with spaces) 
printf("Enter a sentence: "); 
scanf(" %[^\n]", sentence);  // space before %[^\n] is important
 
// Display results 
printf("\n--- Output ---\n"); 
printf("Character: %c\n", ch); 
printf("String: %s\n", str); 
printf("Sentence: %s\n", sentence); 
return 0; 
} 

