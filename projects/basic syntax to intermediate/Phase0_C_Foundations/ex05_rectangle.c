#include <stdio.h>

int main() {
    int width, height, area, perimeter;

    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    area = width * height;
    perimeter = 2 * (width + height);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
