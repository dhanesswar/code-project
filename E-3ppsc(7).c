#include<stdio.h> 
int main() 
{ 

int a,b,c,total; 
printf("\n Enter any three values:"); 
scanf("%d%d%d",&a,&b,&c); 
total=(a>b)?((a>c)?a:c):((b>c)?b:c); 
printf("\n The Biggest Value=%d",total);
return 0;
}
