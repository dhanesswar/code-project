#include <stdio.h>

int main() {
    int N;
    printf("Enter the number between 1 and 12:");
    scanf("%d",&N);
    switch (N){
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break;
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
        case 6:
        
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("Septmber");
        break;
        case 10:
        printf("October");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("Decmber");
        break;
        default:
        printf("Invalid age");
        break;
        
        
    }
   
    return 0;
}
