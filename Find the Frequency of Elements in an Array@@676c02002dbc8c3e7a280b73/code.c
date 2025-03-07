#include <stdio.h>
int main() {
    int n, num;
    int freq[1000] = {0};
    int unique[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (freq[num] == 0) {
            unique[i] = num;
        }
        freq[num]++;
    }
    for (int i = 0; i < n; i++) {
        num = unique[i];
        if (freq[num] > 0) {
            printf("%d %d\n", num, freq[num]);
            freq[num] = 0;
    }
    return 0;
}