#include <stdio.h> 
int main() 
{ 

float length, breadth, area; 
printf("Enter length and breadth of the rectangle: "); 
scanf("%f %f", &length, &breadth); 
area = length * breadth;   // Formula: l × b 
printf("Area of Rectangle = %.2f\n", area);
return 0;
}
