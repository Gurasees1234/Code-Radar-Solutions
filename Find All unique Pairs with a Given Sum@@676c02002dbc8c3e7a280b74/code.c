#include <stdio.h>
int main(){
    int n,a,arr[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    printf("%d",arr[100]);
}