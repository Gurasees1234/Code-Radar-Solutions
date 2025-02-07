#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==0){printf("Not Set");}
    int b=sizeof(a)*8-1;
    while((a>>b)==0){b--;}
    if((a>>b)&1){printf("Set");}
    else{printf("Not Set");}
    return 0;
}