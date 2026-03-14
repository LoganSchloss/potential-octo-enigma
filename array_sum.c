#include <stdio.h>

int main(void) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    int *ptr = array;

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", *(ptr + i));
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("Somma: %d\n", sum);

    return 0;
}
