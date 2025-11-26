#include<stdio.h>
int main(){
    int N;
    printf("Enter the number between 1 to 7:");
    scanf("%d",&N);
    switch (N){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        printf(" working day");
        break;
        case 1:
        case 7:
        printf("Holiday");
        break;
        default:
        printf("Invalid number");
        break;
    
    }
    return 0;
}
