#include <stdio.h> 
#define PI 3.14   // defining constant value for p 
int main() 
{ 
 
float radius, area; 
printf("Enter the radius of the circle: "); 
scanf("%f", &radius); 
area = PI * radius * radius;   // Formula: pr² 
printf("Area of Circle = %.2f\n", area); 
return 0;
}
