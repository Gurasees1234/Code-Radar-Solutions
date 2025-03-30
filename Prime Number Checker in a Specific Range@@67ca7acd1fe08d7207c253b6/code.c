int printPrimesInRange(int a,int b){
    int i;
    for (int i=a;i<b;i++){
        for (int j=2;j*j<=i;j++){
        if (i%j==0){printf("No prime numbers");break;}}
    }
    printf("%d ",i);
}