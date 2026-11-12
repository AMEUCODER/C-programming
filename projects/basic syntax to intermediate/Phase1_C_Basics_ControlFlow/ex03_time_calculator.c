#include <stdio.h>

void convertSecondsToHMS(int totalSec) {
    int h = totalSec / 3600;
    int m = (totalSec % 3600) / 60;
    int s = totalSec % 60;
    printf("%02d : %02d : %02d\n", h, m, s);
}

int timeToSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int choice;
    printf("--- Time & Duration Calculator ---\n");
    printf("1. Convert seconds to HH:MM:SS\n");
    printf("2. Calculate difference between two timestamps\n");
    printf("Choose option: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int sec;
        printf("Enter total seconds: ");
        scanf("%d", &sec);
        printf("Formatted Time: ");
        convertSecondsToHMS(sec);
    } else if (choice == 2) {
        int h1, m1, s1, h2, m2, s2;
        printf("Enter start time (HH MM SS): ");
        scanf("%d %d %d", &h1, &m1, &s1);
        printf("Enter end time (HH MM SS): ");
        scanf("%d %d %d", &h2, &m2, &s2);

        int startSec = timeToSeconds(h1, m1, s1);
        int endSec = timeToSeconds(h2, m2, s2);
        int diff = endSec - startSec;

        if (diff < 0) diff += 24 * 3600; // Handle overnight duration

        printf("Duration Difference: ");
        convertSecondsToHMS(diff);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
