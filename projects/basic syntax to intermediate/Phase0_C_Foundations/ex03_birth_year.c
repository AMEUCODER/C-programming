#include <stdio.h>

int main() {
    int age, birthYear;
    int currentYear = 2026;

    printf("Enter your age: ");
    scanf("%d", &age);

    birthYear = currentYear - age;

    printf("You were likely born in: %d\n", birthYear);

    return 0;
}
