#include<stdio.h>
int main(){
	int x,n,y=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(x=1;x<=n;x=x+2){
		y=y+x;
	}
	printf("The sum of odd numbers is:%d",y);
	return 0;
}
