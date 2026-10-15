#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max;

    // Ask the user for 4 numbers
    printf("Enter 4 numbers separated by spaces: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Assume num1 is the largest initially
    max = num1;

    // Compare with remaining numbers
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }

    // Print result
    printf("The biggest number is: %d\n", max);

    return 0;
}
