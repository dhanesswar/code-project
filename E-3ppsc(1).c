#include<stdio.h> 
#include<math.h>   // for sqrt() function 
int main() 
{ 

double num, result; 
// Input 
printf("Enter a number: "); 
scanf("%lf", &num); 
// Calculate square root 
result = sqrt(num); 
// Output 
printf("Square root of %.2lf = %.2lf\n", num, result); 
return 0;
}
