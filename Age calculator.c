// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int d1,m1,y1,d2,m2,y2;
    printf("Enter Date of Birth (DD MM YYYY):");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter Today Date:");
    scanf("%d %d %d",&d2,&m2,&y2);
    int days= d2-d1;
    int months=m2-m1;
    int years=y2-y1;
    if(days<0){
        days=days+30;
        months--;
    }
    if(months<0){
        months=months+12;
        years--;
    }
    printf("----Present age-----\n");
    printf("%d years/%d months/%d Days ",years
    ,months,days);
    return 0;
}
