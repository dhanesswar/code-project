#include<stdio.h>
struct account{
    int acc_no;
    char name[50];
    float balance;
};
struct account acc[100];
int count = 0;
int main(){
    int choice,i,accno;
    float amount;
    do
    {
    	printf("----MENU----\n");
        printf("1.Create Account\n2.Deposit\n3.withdraw\n4.Check Balance\n5.Exit\n");
        printf("Enter your Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter your name:");
            scanf("%s",acc[count].name);
            printf("Enter your Account number:");
            scanf("%d",&acc[count].acc_no);
            printf("Enter Balance:");
            scanf("%f",&acc[count].balance);
        count++;
            printf("---Account Created Successfully---\n");
        }
        else if(choice==2)
        {
            printf("Enter your account number:");
            scanf("%d",&accno);
            for(i=0;i<count;i++){
                if(acc[i].acc_no==accno){
                    printf("Enter the amount:");
                    scanf("%f",&amount);
                    acc[i].balance=acc[i].balance+amount;
                     printf("Present Balance:%.2f",acc[i].balance);
                    printf("\n---Money Deposited Successfully---\n");
                   
                }
            }
        }
        else if(choice==3)
        {
            printf("Enter your Account number:");
            scanf("%d",&accno);
            for(i=0;i<count;i++){
                if(acc[i].acc_no==accno)
                {
                    printf("Enter the amount:");
                    scanf("%f",&amount);
                    if(acc[i].balance>=amount){
                        acc[i].balance=acc[i].balance-amount;
                        printf("Present Balance:%.2f",acc[i].balance);
                        printf("\n---Money Withdraw! Successfully---\n");
                    }else{
                        printf("Not enough balance");
                    }
                }
            }
        }
        else if(choice==4)
        {
            printf("Enter your Acccount number:");
            scanf("%d",&accno);
            for(i=0;i<count;i++){
                if(acc[i].acc_no==accno)
                {
                    printf("Name:%s\n",acc[i].name);
                    printf("Present Balance:%.2f\n",acc[i].balance);
                }
            }
        }
        
    }while(choice!=5);
    printf("---Exited---");
return 0;
    
}
