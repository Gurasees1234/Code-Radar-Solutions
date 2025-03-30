#include <stdio.h>
int main(){
    int n,arr[100],a;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for (int j=a;j<n;j++){
        printf("%d\n",arr[j]);
    }
    for (int k=0;k<a;k++){
        printf("%d\n",arr[k]);
    }
}