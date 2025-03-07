#include <stdio.h>

int main() {
    int n, num;
    int even_count = 0, odd_count = 0;

    // Taking input for the number of elements
    scanf("%d", &n);

    // Taking input for the n elements and counting even and odd numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Output the count of even and odd numbers
    printf("%d %d\n", even_count, odd_count);

    return 0;
}
