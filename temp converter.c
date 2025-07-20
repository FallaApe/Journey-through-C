#include <stdio.h>

int main() {
    float f, c;
    while (1) {
        printf("1) Convert Fahrenheit to Celsius\n");
        printf("2) Convert Celsius to Fahrenheit\n");
        printf("0) Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        } else if (choice == 1) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f\n", c);
        } else if (choice == 2) {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            f = (c * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", f);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
