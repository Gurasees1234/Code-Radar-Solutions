#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    if(n<2){printf("Not Prime");}
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    
    return 1;}

    if (0){printf("Not Prime");}
    else{printf("Prime");}
    return 0;}
