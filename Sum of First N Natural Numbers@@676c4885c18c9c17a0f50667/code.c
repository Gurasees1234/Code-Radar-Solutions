#include <stdio.h>
int main() {
    int a,sum=0,i=0;
    scanf("%d",&a);
    while(i<=a){sum+=i;i++;}
    printf("%d",sum);
    return 0;
}