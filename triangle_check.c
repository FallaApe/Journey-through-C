#include <stdio.h>
#include <stdlib.h>
int main() {
    int side1,side2,side3;
    printf("Enter the length of the first side: ");
    scanf("%d", &side1);
    printf("Enter the length of the second side: ");
    scanf("%d", &side2);
    printf("Enter the length of the third side: ");
    scanf("%d", &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid input. All sides must be positive integers.\n");
        return 1;
    }
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The lengths %d, %d, and %d can form a triangle.\n", side1, side2, side3);
    } else {
        printf("The lengths %d, %d, and %d cannot form a triangle.\n", side1, side2, side3);
    }
    return 0;


}
