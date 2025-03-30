int printPrimesInRange(int a,int b){
    for (i=a;i*i<b;i++){
        if (i%b==0){break;}
    }
    printf("%d ",i);
}