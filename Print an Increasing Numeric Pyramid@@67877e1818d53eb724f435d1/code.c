#include <stdio.h>

void increasing_numeric_pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    increasing_numeric_pyramid(n);
    return 0;
}
