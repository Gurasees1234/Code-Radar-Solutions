#include <stdio.h>
int main() {
    int n, num;
    int freq[1000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        freq[num]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
    return 0;
}
