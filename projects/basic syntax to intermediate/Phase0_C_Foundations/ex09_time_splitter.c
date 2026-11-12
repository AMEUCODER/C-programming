#include <stdio.h>

int main() {
    int totalSec, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSec);

    hours = totalSec / 3600;
    minutes = (totalSec % 3600) / 60;
    seconds = totalSec % 60;

    printf("%d : %d : %d\n", hours, minutes, seconds);

    return 0;
}
