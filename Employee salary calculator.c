// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float hra,da,salary,tax,gross,net;
    printf("Enter your salary:");
    scanf("%f",&salary);
    if(salary<0){
        printf("Invalid salary");
        return 0;
    }
    hra=0.2*salary;
    da=0.1*salary;
    gross= salary+hra+da;
    if(gross<=50000)
    tax=0;
    else if(gross<=100000)
    tax=0.1*gross;
    else
    tax=0.2*gross;
    net=gross-tax;
    printf("---Salary Details---\n");
    printf("Basic Salary :%.2f\n",salary);
    printf("HRA :%.2f\n",hra);
    printf("DA :%.2f\n",da);
    printf("gross:%.2f\n",gross);
    printf("TAX :%.2f\n",tax);
    printf("Net Salary:%.2f\n",net);
    

    return 0;
}
