#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    if(n<2){printf("Not Prime");}
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            break;
        }    
    printf("Prime");}}