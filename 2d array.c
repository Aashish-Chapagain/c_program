#include <stdio.h>
#include <stdbool.h>

bool odd_even(int n) {
    return n % 2 == 0;
}

int main() {
    int arr[3][3], i, j, count = 0, count2 = 0;

    printf("Enter the elements of the array (3x3 matrix):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (odd_even(arr[i][j])) {
                count++;
            } else {
                count2++;
            }
        }
    }

    printf("The total number of even elements is: %d\n", count);
    printf("The total number of odd elements is: %d\n", count2);

    return 0;
}
