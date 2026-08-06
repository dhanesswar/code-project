// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float units,bill;
   printf("Enter units consumed:");
   scanf("%f",&units);
   if(units<0){
       printf("Invalid units");
   }
    else if(units<=100){
       bill= units*1.50;
   }
else if(units<=200){
    bill= units*2.50;
}
else if(units<=300)
{
    bill=units*4.00;
}
else if(units<=400){
    bill =units*5.00;
}
    else 
    {
        bill=units*6.00;
}
printf("\n---Electricity Bill---\n");
printf("Units Consumed:%.2f\n",units);
printf("Total bill for electricity:%.2f",bill);
return 0;
}
