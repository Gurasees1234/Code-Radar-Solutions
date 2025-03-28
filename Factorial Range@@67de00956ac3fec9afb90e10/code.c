void factorialRange(int a,int b){
    if (a>b){
        printf("Invalid range");
    }
    else if(a<0 ||b<0){
        printf("Invalid range");
    }
    else{
    int i,j,fact;
    for (i=a;i<=b;i++){
        fact=1;
        for (j=i;j>0;j--){
            fact*=j;
        }
        printf("%d\n",fact);
    }
    }}