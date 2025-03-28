#include <stdio.h>

int main() {
    int n, arr[100], sum;

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target sum
    scanf("%d", &sum);

    // Find and print only unique pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("%d %d\n", arr[i], arr[j]);
                return 0;  // Exit after printing the first valid pair
            }
        }
    }

    return 0;
}
