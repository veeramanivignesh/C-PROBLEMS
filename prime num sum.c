#include <stdio.h>

int main() {
    int i = 0;

    while loop: Print numbers from 0 to 10
    printf("Numbers from 0 to 10:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 10;
    
    printf("\nNumbers from 10 to 0:\n");
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }

    return 0;
}
