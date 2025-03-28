#include <stdio.h>
int main() {
    int n,arr[100],sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    scanf("%d",&sum);
    for(int j=0;j<n;j++)
        for(int k=j+1;k<n;k++)
            if(arr[j]+arr[k]==sum)
                printf("%d %d\n",arr[j],arr[k]);
    return 0;
}
