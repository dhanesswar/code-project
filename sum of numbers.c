#include<stdio.h>
int main(){
	int x,y=0;
		printf("Enter the number:");
	scanf("%d",&x);
	for(x=1;x<=100;x++){
		y=y+x;
	}
	printf("The sum of numbers is:%d",y);
	return 0;
}
