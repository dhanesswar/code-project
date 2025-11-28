#include<stdio.h>
int main()
{
	int number,p,count;
	printf("Enter the number:");
	scanf("%d",&number);
	count=10;
	while(count>=1)
	{
	int	p=number*count;
		printf("%d * %d = %d\n",number,count,p);
		count=count-1;
	}
	return 0;
}
