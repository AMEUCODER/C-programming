#include <stdio.h>

void showMenu() {
    printf("\n--- Calculator & Base Converter ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Convert Decimal to Binary & Hexadecimal\n");
    printf("6. Exit\n");
    printf("Choose an option: ");
}

void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int choice;
    double num1, num2;
    int decVal;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    printf("Result: %.2lf\n", num1 / num2);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5:
                printf("Enter a positive integer: ");
                scanf("%d", &decVal);
                if (decVal < 0) {
                    printf("Please enter a positive integer.\n");
                } else {
                    printf("Decimal: %d\n", decVal);
                    printf("Binary: ");
                    printBinary(decVal);
                    printf("\nHexadecimal: %X\n", decVal);
                }
                break;
            case 6:
                printf("Exiting... Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
