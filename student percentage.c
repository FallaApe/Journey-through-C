#include <stdio.h>

int main() {
    float maths, science, english, cs, percentage, total;

    printf("Enter marks for Maths, Science, English, CS: ");
    scanf("%f %f %f %f", &maths, &science, &english, &cs);

    total = maths + science + english + cs;
    percentage = total / 4;

    printf("Total percentage is %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("A Grade\n");
    } else if (percentage >= 80) {
        printf("B Grade\n");
    } else if (percentage >= 70) {
        printf("C Grade\n");
    } else {
        printf("Fail / D Grade\n");
    }

    return 0;
}
