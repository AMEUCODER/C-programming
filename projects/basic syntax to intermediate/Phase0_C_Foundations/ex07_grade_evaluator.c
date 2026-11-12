#include <stdio.h>

int main() {
    float mark;

    printf("Enter mark (0 to 20): ");
    scanf("%f", &mark);

    if (mark >= 10.0) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}
