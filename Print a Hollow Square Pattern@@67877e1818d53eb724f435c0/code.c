#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=n;j++){
            if(i=1||i==n||j==1||j==n){printf("*");}
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}