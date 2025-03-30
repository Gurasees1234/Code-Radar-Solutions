int isPrime(int num){
    int i;
    if (i<2) {return 0;break;}
    else{
    for (i=2;i*i<=num;i++){
        if (num%i==0)return 0;
    }
    return 1;
}}