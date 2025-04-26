#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    int choice, quantity;
    float total = 0, discount = 0, finalAmount;

    // Login system
    printf("Login to Mini E-commerce System\n");
    printf("---------------------------------\n");
    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);

    // Check username and password
    if (strcmp(username, "user") == 0 && strcmp(password, "pass") == 0) {
        printf("\nLogin Successful!\n");
        printf("---------------------------------\n");

        // Shopping system
        while (1) {
            printf("\nMenu:\n");
            printf("1. Mobile Phone - Rs15,000\n");
            printf("2. Headphones  - Rs2,000\n");
            printf("3. Laptop      - Rs50,000\n");
            printf("4. Exit and Show Bill\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 4) {
                break;
            }

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            switch (choice) {
                case 1: total += 15000 * quantity; break;
                case 2: total += 2000 * quantity; break;
                case 3: total += 50000 * quantity; break;
                default: printf("Invalid choice. Try again.\n"); break;
            }
        }

        // Discount logic
        if (total > 20000) {
            discount = total * 0.10;  // 10% discount
        }
        finalAmount = total - discount;

        // Show bill
        printf("\n---------------------------------\n");
        printf("Thank you for shopping with us!\n");
        printf("Total amount: Rs%.2f\n", total);
        printf("Discount applied: Rs%.2f\n", discount);
        printf("Final amount to pay: Rs%.2f\n", finalAmount);
        printf("---------------------------------\n");
    } else {
        printf("\nLogin Failed. Please restart the program.\n");
    }

    return 0;
}
