// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int e,a,n=1000,amount;
   
   printf("---MENU---\n");
   printf("1.Insert\n");
   printf("2.Check Balance\n");
   printf("3.Debit\n");
   printf("4.Exit\n");
   printf("Enter your choice:");
   scanf("%d",&e);
   switch(e)
   {case 1:
 
  printf("Enter the amount:");
   scanf("%d",&a);
      n=n+a;
  printf("Avaliable balance:%d",n);
  break;
  case 2:
  printf("Avaliable balance:%d",n);
  break;
  case 3:
  printf("How much amount you want debit:");
  scanf("%d",&amount);
  if(amount<=n){
      n=n-amount;
      printf("Debited successfully\n");
      printf("Available Balance:%d",n);
  }
  else {
      printf("---Insufficient Balance---");
  }
  break;
case 4:
printf("---Exited---");
break;
default:
printf("Invalid choice");
}
    return 0;
}
