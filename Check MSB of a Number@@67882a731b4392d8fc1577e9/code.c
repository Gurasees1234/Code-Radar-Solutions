#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==0){printf("Not Set");break;}
    int b = 1<<(sizeof(a)* 8 - 1);
    if(a & b){printf("Set");}
    else{printf("Not Set");}
    return 0;
}