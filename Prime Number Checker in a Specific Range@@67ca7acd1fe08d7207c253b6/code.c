int printPrimesInRange(int a, int b) {
    int primeFound = 0;
    for (int i = a; i <= b; i++) {
        if (i <= 1) continue;
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
            primeFound = 1;
        }
    }
    if (!primeFound) {
        printf("No prime numbers\n");
    } else {
        printf("\n");
    }
    
    return 0;
}