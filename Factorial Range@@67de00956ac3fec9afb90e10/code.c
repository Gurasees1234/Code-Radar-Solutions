void factorialRange(int a,int b){
    if (a>b){
        printf("Invalid range");
    }
    else if((a||b)<0){
        printf("Invalid range");
    }
    else{
    int i,j,fact=1;
    for (i=a;i<=b;i++){
        for (j=i;j>0;j--){
            fact*=j;
        }
        printf("%d",j);
    }
    printf("\n");}
}