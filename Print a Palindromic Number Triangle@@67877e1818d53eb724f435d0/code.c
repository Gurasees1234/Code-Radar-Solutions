#include <stdio.h>
void palindromic_triangle(int n) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main() {
    int n = 5; 
    palindromic_triangle(n);
    return 0;
}
