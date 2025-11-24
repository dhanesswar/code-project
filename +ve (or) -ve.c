#include<stdio.h>
int main()
{int N;
printf("Enter the number:");
scanf("%d",&N);
if (N>0){
	printf("The number is positive");
}
else if(N<0){
	printf("The number is negitive");
}
else {
	printf("The number is 0");
}
return 0;
}
