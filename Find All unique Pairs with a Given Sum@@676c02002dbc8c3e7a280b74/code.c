#include <stdio.h>
int main(){
    int n,a,arr[100],sum;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    scanf("%d",&sum);
    for (int j=n;j<0;j--){
        for (int k=n-1;k<0;k--){
            if (j+k==sum){
                printf("%d %d",j,k);
            }
        }
    }
}