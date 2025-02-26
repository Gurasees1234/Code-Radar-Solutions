#include <stdio.h>
int lowestSetBitPosition(int n) {
    if (n == 0) {
        return -1; 
    }
    int position = 1; 
    while (!(n & 1)) {
        position++;
        n >>= 1; 
    }
    return position;
}
int main() {
    int num;
    scanf("%d", &num);
    int position = lowestSetBitPosition(num);
    printf("%d\n", position);
    }

