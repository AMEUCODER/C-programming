#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int attempts = 0;
    float balance = 1000.0; // Initial balance
    int choice;
    float amount;

    printf("--- Welcome to C-Bank ATM ---\n");

    // PIN Validation (Max 3 attempts)
    while (attempts < 3) {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("PIN Verified Successfully!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts remaining: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Card blocked due to 3 wrong attempts!\n");
        return 0;
    }

    // ATM Menu
    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Select option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f. New Balance: $%.2f\n", amount, balance);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash: $%.2f\nNew Balance: $%.2f\n", amount, balance);
                } else if (amount > balance) {
                    printf("Insufficient funds!\n");
                } else {
                    printf("Invalid withdrawal amount!\n");
                }
                break;
            case 4:
                printf("Thank you for using C-Bank ATM!\n");
                break;
            default:
                printf("Invalid selection!\n");
        }
    } while (choice != 4);

    return 0;
}
