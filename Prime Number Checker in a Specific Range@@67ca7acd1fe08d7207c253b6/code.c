int printPrimesInRange(int a, int b) {
    for (int i = a; i < b; i++) {
        if (i <= 1) continue;
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                printf("No prime numbers");
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}