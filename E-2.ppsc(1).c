#include<stdio.h> 
int main() 
{ 
int a, b, intSum, intDiff; 
float x, y, floatSum, floatDiff; 
// Integer inputs 
printf("Enter two integer numbers: "); 
scanf("%d %d", &a, &b); 
// Float inputs 
printf("Enter two float numbers: "); 
scanf("%f %f", &x, &y); 
// Calculations for integers 
    intSum = a + b; 
    intDiff = a - b; 
 
    // Calculations for floats 
    floatSum = x + y; 
    floatDiff = x - y; 
 
    // Display results 
    printf("\n--- Results ---\n"); 
    printf("Integer Sum = %d\n", intSum); 
    printf("Integer Difference = %d\n", intDiff); 
    printf("Float Sum = %.2f\n", floatSum); 
    printf("Float Difference = %.2f\n", floatDiff); 
 
    return 0; 
} 
 

