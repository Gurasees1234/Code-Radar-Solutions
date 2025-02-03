#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (i=2,i=a,i++){
        for(j=2,j=i,j++){
            if(i%j==0){printf("Prime");
            break;
            }{
            else{printf("Not Prime");}
            }
        }
    }
    return 0;
}