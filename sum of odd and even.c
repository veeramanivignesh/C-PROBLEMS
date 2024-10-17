#include <stdio.h>

int main() {
    int i = 1;
    int sumEven = 0;
    int sumOdd = 0;

    // Calculate the sum of even and odd numbers from 1 to 50
    do {
        // Check if the current number is even
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
        i++;
    } while (i <= 50);
    // Print the sum of even and odd numbers
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
