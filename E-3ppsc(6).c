#include <stdio.h> 
int main() 
{ 
float base, height, area; 
printf("Enter base and height of the triangle: "); 
scanf("%f %f", &base, &height); 
area = 0.5 * base * height;   // Formula: ½ × base × height 

printf("Area of Triangle = %.2fcm\n", area); 
return 0; 
} 

