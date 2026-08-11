#include <stdio.h>
#include <string.h>

struct product {
    int id;
    char name[50];
    float price;
    int quantity;
};


struct product p[100];
int count = 0;

int main() {
    int i, id, choice, amount;
    int found; 

    do {
        printf("\n---Inventory Management---\n");
        printf("1. Add Product\n");
        printf("2. Update Product Stock\n");
        printf("3. Search Product\n");
        printf("4. View All Stock\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the Product ID: ");
            scanf("%d", &p[count].id);
            
            printf("Enter the Product Name: ");
            scanf("%49s", p[count].name); 
            
            printf("Enter the Product Price: ");
            scanf("%f", &p[count].price); 
            
            printf("How many quantities do you want to add: ");
            scanf("%d", &p[count].quantity);
            
            count++;
            printf("Product Added Successfully!\n");
        } 
        else if (choice == 2) {
            printf("Enter Product ID to update: ");
            scanf("%d", &id);
            found = 0;
            
            for (i = 0; i < count; i++) {
                if (p[i].id == id) {
                    printf("Enter the quantity to Add: ");
                    scanf("%d", &amount);
                    p[i].quantity += amount;
                    printf("Stock updated Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Product ID not found.\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter the Product ID to search: ");
            scanf("%d", &id);
            found = 0;
            
            for (i = 0; i < count; i++) {
                if (p[i].id == id) {
                    printf("---------------------------\n");
                    printf("Product ID          : %d\n", p[i].id);
                    printf("Product Name        : %s\n", p[i].name);
                    printf("Product Price       : %.2f\n", p[i].price);
                    printf("Product Quantity    : %d\n", p[i].quantity);
                    printf("---------------------------\n");
                    found = 1;
                    break; 
                }
            }
            if (!found) {
                printf("Product Not Found.\n");
            }
        } 
        else if (choice == 4) {
            if (count == 0) {
                printf("No products in inventory.\n");
            } else {
                printf("\n--- All Products in Stock ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %-5d | Name: %-15s | Price: ?%-8.2f | Qty: %d\n", 
                           p[i].id, p[i].name, p[i].price, p[i].quantity);
                }
            }
        } 
        else if (choice == 5) {
            printf("---Exited---\n");
        } 
        else {
            
            printf("Invalid choice. Please select a number between 1 and 5.\n");
        }

    } while (choice != 5);

    
    printf("----??THANK YOU??-----\n");
    //printf("---Visit Again---\n");

    return 0;
}
