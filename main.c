#include <stdio.h>

int main() {
    int numbers[5];
    int i;
    int sum = 0;

    printf("Enter five numbers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            sum += numbers[i];
        }
    }

    printf("Sum of positive numbers: %d\n", sum);

    return 0;
}
