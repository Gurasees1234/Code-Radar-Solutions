#include <stdio.h>
int main(){
    int n,arr[n],a;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",a);
    for (int i=a;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    for (i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
}