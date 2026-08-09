// Online C compiler to run C program online
#include <stdio.h>

struct patient{
    int id;
    char name[50];
    int age;
    char disease[50];
};
struct patient p[100];
int count =0;
int main()
{
    int choice,i,id,j,found=0;
    
    do
    {
        printf("---MAIN MENU---\n");
    printf("1.Add\n2.Search\n3.Display\n4.Delete\n5.Exit\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
        if (choice==1)
        {
            printf("Enter Patient ID:");
            scanf("%d",&p[count].id);
            printf("Enter Patient Name:");
            scanf("%s",p[count].name);
            printf("Enter Patient Age:");
            scanf("%d",&p[count].age);
            printf("Enter the Disease:");
            scanf("%s",p[count].disease);
            count++;
            printf("Patient Added  Successfully\n");
        }
        else if(choice==2)
        {
            printf("Enter the Patient ID:");
            scanf("%d",&id);
            for(i=0;i<count;i++)
            {
                if(p[i].id==id)
                {
                    printf("Patient Name:%s\n",p[i].name);
                    printf("Patient Age:%d\n",p[i].age);
                    printf("Patient Effected Disease:%s\n",p[i].disease);
                    found=1;
                    break;
                }
                
            }
            if(found==0)
            {
                
                    printf("INVALID PATIENT ID\n");
                
            }
        }
        else if(choice==3)
        {
            for(i=0;i<count;i++)
            {printf("Patient ID:%d\n",p[i].id);
                printf("Patient name:%s\n",p[i].name);
                printf("Patient Age:%d\n",p[i].age);
                printf("Patient Effected Disease:%s\n",p[i].disease);
                
            }
        }
        else if(choice==4)
        {
            printf("Enter the Patient ID:");
            scanf("%d",&id);
            for(i=0;i<count;i++)
            {
                if(p[i].id==id)
                {
                    for(j=i;j<count-1;j++)
                   { p[j]=p[j+1];}
                   }
                count--;
                printf("Deleted Successfully\n");
                found=1;
                break;
            }
            if(found==0){
                printf("Patient Not found");
            }
        }
    }while(choice!=5);
    printf("---Exited---\n");
    return 0;
}

