int printPrimesInRange(int a,int b){
    int i;
    for (int i=a;i<b;i++){
        for (int j=i;j<b;j++){
        if (i%j==0){break;}}
    }
    printf("%d ",i);
}