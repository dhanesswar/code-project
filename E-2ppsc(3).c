#include <stdio.h> 
int main() 
{ 
int a, b; 
printf("Enter two numbers: "); 
scanf("%d%d", &a, &b); 
printf("\n--- Bitwise Operations ---\n"); 
printf("a & b = %d\n", a & b);   // AND 
printf("a | b = %d\n", a | b);   // OR 
printf("a ^ b = %d\n", a ^ b);   // XOR 
printf("~a = %d\n", ~a);         
// NOT 
printf("a << 1 = %d\n", a << 1); // Left shift 
printf("a >> 1 = %d\n", a >> 1); // Right shift 
return 0; 
} 

