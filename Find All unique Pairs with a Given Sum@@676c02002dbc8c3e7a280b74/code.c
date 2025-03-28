#include <stdio.h>
int main(){
    int n,arr[100],sum;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    for (int j=n;j>=0;j--){
        for (int k=n;k>=0;k--){
            if (arr[j]+arr[k]==sum){
                printf("%d %d\n",arr[j],arr[k]);
            }
        }
    }
}