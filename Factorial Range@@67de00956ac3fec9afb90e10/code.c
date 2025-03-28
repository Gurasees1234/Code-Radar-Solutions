void factorialRange(int a,int b){
    int i,j,fact=1;
    for (i=a;i<=b;i++){
        for (j=i;j>0;j--){
            fact*=j;
        }
        printf("%d",j);
    }
}