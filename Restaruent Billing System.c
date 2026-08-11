#include <stdio.h>
#include <string.h>

#define MENU_SIZE 7
#define MAX_ORDERS 50

// Structure to hold menu items
typedef struct {
    int id;
    char name[30];
    float price;
} MenuItem;

// Structure to hold ordered items
typedef struct {
    MenuItem item;
    int quantity;
} OrderItem;

// Function to display the menu
void displayMenu(MenuItem menu[], int size) {
    printf("\n==================================\n");
    printf("         RESTAURANT MENU\n");
    printf("==================================\n");
    printf("ID   %-20s Price\n", "Item Name");
    printf("----------------------------------\n");
    for(int i = 0; i < size; i++) {
        printf("%-4d %-20s ?%.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
    printf("==================================\n");
}

// Function to take the customer's order
int takeOrder(MenuItem menu[], int menuSize, OrderItem orders[]) {
    int orderCount = 0;
    int choice;
    int qty;

    printf("\n[Enter Item ID to order, or 0 to finish]\n");

    while (1) {
        printf("Enter Item ID: ");
        
        // Input validation for Item ID
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (choice == 0) {
            break; // Exit loop if user enters 0
        }

        if (choice < 1 || choice > menuSize) {
            printf("Invalid Item ID. Please try again.\n");
            continue;
        }

        printf("Enter quantity for %s: ", menu[choice-1].name);
        
        // Input validation for Quantity
        if (scanf("%d", &qty) != 1 || qty <= 0) {
            printf("Invalid quantity. Must be greater than 0.\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Check if the item is already in the order to combine quantities
        int found = 0;
        for (int i = 0; i < orderCount; i++) {
            if (orders[i].item.id == choice) {
                orders[i].quantity += qty;
                found = 1;
                break;
            }
        }

        // If not found in current order, add it as a new line item
        if (!found) {
            orders[orderCount].item = menu[choice-1];
            orders[orderCount].quantity = qty;
            orderCount++;
        }
    }
    return orderCount;
}

// Function to calculate and print the final bill
void calculateBill(OrderItem orders[], int orderCount) {
    if (orderCount == 0) {
        printf("\nNo items ordered. Have a great day!\n");
        return;
    }

    float subtotal = 0.0;
    float discountThreshold = 500.0;
    float discountRate = 0.10; // 10% discount
    float gstRate = 0.05;      // 5% GST

    printf("\n==================================\n");
    printf("            FINAL BILL\n");
    printf("==================================\n");

    // Calculate subtotal and print individual items
    for (int i = 0; i < orderCount; i++) {
        float itemTotal = orders[i].item.price * orders[i].quantity;
        subtotal += itemTotal;
        printf("%-15s x%-2d : ?%.2f\n", orders[i].item.name, orders[i].quantity, itemTotal);
    }

    printf("----------------------------------\n");
    printf("%-20s : ?%.2f\n", "Subtotal", subtotal);

    // Apply Discount
    float discountAmount = 0.0;
    if (subtotal >= discountThreshold) {
        discountAmount = subtotal * discountRate;
        printf("Discount (10%%)       : -?%.2f\n", discountAmount);
    }

    float discountedTotal = subtotal - discountAmount;

    // Apply GST
    float gstAmount = discountedTotal * gstRate;
    printf("GST (5%%)            : +?%.2f\n", gstAmount);

    // Calculate Final Total
    float finalTotal = discountedTotal + gstAmount;

    printf("==================================\n");
    printf("%-20s : ?%.2f\n", "TOTAL AMOUNT TO PAY", finalTotal);
    printf("==================================\n");
    printf("      Thank you for visiting!     \n");
}

int main() {
    // Initialize the menu array
    MenuItem restaurantMenu[MENU_SIZE] = {
        {1, "Burger", 150.0},
        {2, "Pizza", 300.0},
        {3, "Pasta", 220.0},
        {4, "Fries", 100.0},
        {5, "Cold Drink", 60.0},
        {6, "Coffee", 80.0},
        {7, "Brownie", 120.0}
    };

    // Array to hold the customer's order
    OrderItem customerOrder[MAX_ORDERS];

    // Execution Flow
    displayMenu(restaurantMenu, MENU_SIZE);
    
    int orderCount = takeOrder(restaurantMenu, MENU_SIZE, customerOrder);
    
    calculateBill(customerOrder, orderCount);

    return 0;
}
