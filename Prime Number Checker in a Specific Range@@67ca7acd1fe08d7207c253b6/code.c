int printPrimesInRange(int a,int b){
    int i;
    for (int i=a;i*i<b;i++){
        if (i%b==0){break;}
    }
    printf("%d ",i);
}