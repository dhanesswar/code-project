#include<stdio.h>
struct Book{
    int id;
    char name[50];
    char author[50];
    int issued;
};
struct Book b[100];
int count=0;
int main(){
    int choice,id,i;
    do {
         printf("\n---MAIN MENU---\n");
    printf("\n1.Add Book\n2.Issue Book\n3.Return Book\n4.Search Book\n5.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the book ID:");
        scanf("%d",&b[count].id);
        printf("Enter the book name:");
        scanf("%s",b[count].name);
        printf("Enter Author name:");
        scanf("%s",b[count].author);
        b[count].issued=0;
        count++;
        printf("\n---Book Added---\n");
    }
    else if(choice==2)
    {
        printf("Enter the Book ID:");
        scanf("%d",&id);
        for(i=0;i<count;i++){
            if(b[i].id==id)
            {
                if(b[i].issued==0){
                    b[i].issued=1;
                    printf("\n---Book issued---\n");
                }else{
                    printf("\n--Book is alredy issued--\n");
                }
            }
        }
    }
       else if(choice==3)
       {
           printf("Enter the book ID:");
           scanf("%d",&id);
           for(i=0;i<count;i++){
               if(b[i].id==id){
                   if(b[i].issued==1){
                       b[i].issued=0;
                       printf("\n---Book is Returned---\n");
                   }else{
                       printf("\n---Book isn't Returned---\n");
                   }
               }
           }
       } 
       else if(choice==4){
           printf("Enter the book ID:");
           scanf("%d",&id);
           for(i=0;i<count;i++){
               if(b[i].id==id){
                   printf("Name:%s\n",b[i].name);
                   printf("Author Name:%s\n",b[i].author);
                   if(b[i].issued==0)
                   printf("\n---Book is Available---\n");
                   else
                   printf("\n---Book isn't Available---\n");
               }
           }
       }
    }while(choice!=5);
    printf("\n---Exited---\n");
    return 0;
}
